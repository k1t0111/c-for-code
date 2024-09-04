#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <string.h> 
#define N 1500 
int line,list,cnt1=0;                              //全局变量 
void openmap(char str[][100],int cnt);      //函数声明 
void tellstory();
void showmap(char str[][100]);
void updatemap(char str[][100],int cnt);
void gotoxy(int x,int y); 
void hidecursor();
int main()
{
	int cnt=2; 
	char str2[100][100]=
{
"*****************************************+",
"O           *           *   *     *   * *+",
"*** *** *** ***** ***** * * * ***** * * *+",
"* *   * *       *   *   * * * *     * * *+",
"* *** * ******* * * * *** * * * ***** * *+",
"*   * *   *   * * * *     *   *   * * * *+",
"* *** *** * * * *** * *********** * * * *+",
"* *   * * * * *     * *   *       * *   *+",
"* * *** * * * ******* * * * ******* *** *+",
"* * *   * * *       * * *   *         * *+",
"* * *** * * ***** * * * ********* *** * *+",
"*   *   * * *     * * * *         *   * *+",
"* *** * * *** ******* * ***** ***** *** *+",
"*     * *   *       * * *     *       * *+",
"********* * * ***** * * * * *********** *+",
"*       * * * *   *   * * * *   *   *   *+",
"* ***** *** * *   ***** * *** * * * * ***+",
"*   * *     *   *   *   *     *   * *   *+",
"* * * *********** *** ***** ******* *** *+",
"* * *     *   *   *   *   * *     *     *+",
"* * ***** * * * *** *** * * ***** *******+",
"* * *     * * *   *   * * *     *       *+",
"* * * *** * * *** *** * ******* * *** * *+",
"* * *   * * *       *   *       * *   * *+",
"* * *** * * ************* ******* * *****+",
"* *   * * * * *           *       *     *+",
"* *** * *** * * ***************** ***** *+",
"*   * *       * *           *   * *     *+",
"*** * * ******* * ******* * * * *** *****+",
"*   * *   *   * * *       * * *   * *   *+",
"* *** *** * * * *** ******* * *** * * * *+",
"* * *   * * * * *   * *   * * * * * * * *+",
"* * *** *** * * * *** * * * * * * * * * *+",
"*     *   * *   * * *   * *   *   * * * *+",
"* ******* * ***** * * *** ***** *** * * *+",
"* *       *   *   *     *       *     * *+",
"* * *** ***** *** ***** *************** *+",
"* * *   *   *   *   *   *   *           *+",
"* * ***** * *** *** * *** * * ********* *+",
"* *       *         *     *   *        >$+",
"*****************************************+"	
}; 
printf("\n小O:'小心！古格鲁王朝地面发生震动导致地图改变'\n\n");
Sleep(2000); 
openmap(str2,cnt);                     //执行第二关 
updatemap(str2,cnt);	
    return 0;
}
/*函数功能：读取文件并保存地图*/
void openmap(char str[][100],int cnt)
{
	
	if(cnt==1)
	{
		line=21;
		list=22; 
	}
	else
	{
		line=41;
		list=42; 
	} 
	showmap(str);                      //展示关卡地图 
}
/*函数功能：呈现数据展示地图*/
void showmap(char str[][100])
{
	int i,j;								    //i j 二维数组循环参数 
	system("color 2");  
	for(i=0;i<line;i++)                        
	{
		for(j=0;j<list;j++)                       //2.1循环呈现地图 
		{	
			printf("%c",str[i][j]);					 
		}
		printf("\n");
	}
}
/*函数功能：更新地图 并 清屏更换*/
void updatemap(char str[][100],int cnt)
{
	int x,y,exitx,exity;		    		    //3.1建立平面坐标系  给出x y入口  exitx exity 出口  
	char input;				    					//键盘wasd 输入控制方向  cnt1 地图二头两步刷新 
	if(cnt==1)
	{
		x=7;
		y=0; 
		exitx=3;
		exity=20; 
	} 
	else
	{
		x=1;
		y=0; 
		exitx=39;
		exity=40; 
	} 
	while(x!=exitx||y!=exity)                          //3.2循环更新地图 
	{
		
			cnt1++; 
			input=getch();
			switch(input)                       //条件分支结构 判断方向 
			{
				case 'a' :y-=1;
					if(y<0)                     //方向移动出界错误 检查 
					{
						y++;
						system("color 4"); 
						printf("error！小O已经跑到地图外了...");
						Sleep(N);                             //延迟
						system("cls");
						showmap(str);
						break; 
					}                    
					if(str[x][y]=='*')      //移动到障碍 错误检查 
					{
						y++;
						system("color 4"); 
						printf("error！撞墙啦！小O要被撞晕了...");
						Sleep(N);                             //延迟
						system("cls");
						showmap(str);
						break; 
					}
						str[x][y]='O';      //更新玩家位置
						str[x][y+1]=' ';
						break;
				case 'w' :x-=1;       
					if(str[x][y]=='*')      //移动到障碍 错误检查 
					{
						x++; 
						system("color 4"); 
						printf("error！撞墙啦！小O要被撞晕了...");
						Sleep(N);                             //延迟
						system("cls");
						showmap(str);
						break; 
					}
					
						str[x][y]='O';      //更新玩家位置
						str[x+1][y]=' ';
						break;
					
				case 's' :x+=1;
					if(str[x][y]=='*')      //移动到障碍 错误检查 
					{
						x--;
						system("color 4"); 
						printf("error！撞墙啦！小O要被撞晕了...");
						Sleep(N);                             //延迟
						system("cls");
						showmap(str);
						break; 
					}	
				
						str[x][y]='O';      //更新玩家位置
					    str[x-1][y]=' ';
					    break;
					
				case 'd' :y+=1;         
					if(str[x][y]=='*')      //移动到障碍 错误检查 
					{
						y--; 
						system("color 4"); 
						printf("error！撞墙啦！小O要被撞晕了...");
			        	Sleep(N);                             //延迟
						system("cls");
						showmap(str);						
						break; 
					}
						str[x][y]='O';      //更新玩家位置
					    str[x][y-1]=' ';
					    break;
				default :
				system("color  4"); 
				printf("错误输入，请用wasd移动");
				Sleep(N); 
				break; 
			}
			/*if(cnt==1)
			{
				system("color 4"); 
				printf("小O:'小心！古格鲁王朝地面发生震动导致地图改变'");
				Sleep(2000);
			}*/ 
			/*if(cnt==2)
			{
				system("color 4"); 
				printf("小O:'小心！震动越来越剧烈!'");
				Sleep(2000); 
			}*/
			if(cnt1==3)
			{
				system("cls");
				system("color 6"); 
				printf("\n\n震动减弱地图恢复正常 继续冒险！出发！");
				Sleep(2000); 
			}
		hidecursor();                               //隐藏光标 
	    gotoxy(0,0);                                // 清屏
    	showmap(str);                           //更新地图呈现
	} 
}
/*函数功能：清理屏幕 */
void gotoxy(int x,int y) 
{
	HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD  pos;
	pos.X=x;
	pos.Y=y;
	SetConsoleCursorPosition(handle,pos);  
}
/*函数功能:隐藏光标*/
void hidecursor()
{
	CONSOLE_CURSOR_INFO cursor_info={1,0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&cursor_info);
}
