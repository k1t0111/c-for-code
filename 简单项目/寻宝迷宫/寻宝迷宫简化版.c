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
main()
{
//(1)打开文件 把地图复制到二维数组中
    char str1[100][100]=
{
"*********************+",
"*     *   *         *+",
"* *** * *** ***** * *+",
"* *   *     ***** *>$+",
"* * ***********   * *+",
"* * *           * * *+",
"* * * *********** * *+",
"O * * *         * * *+",
"*** * * ******* * * *+",
"* * *   * *   * * * *+",
"* * * *** * * * * * *+",
"* * * *   * * * * * *+",
"* * * * *** * * * * *+",
"* *   *     * * * * *+",
"* * ********* * * * *+",
"* * *         * *   *+",
"* * * ********* *****+",
"*   *           *   *+",
"*** *************** *+",
"*                   *+",
"*********************+"

};
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
	char judge;                 //str 二维数组保存地图  judge判断 
	int cnt=1,i;                            //记录关卡 
	system("color 3");                     //浅蓝色 
	printf("\n“欢迎来到寻宝探秘，我是你的队友小O！历险开始喽！”\n\n"); 
	Sleep(3000);                           
	system("color 6");                     //黄色 
	tellstory();
	system("color 3");                     //浅蓝色 
	printf("“准备好和小O一起去探险了吗？”\n");
	system("PAUSE");                       //暂停           
	system("cls");                     
	system("color c");                     //浅红色 
	printf("\n寻宝规则:以wasd为方向键上左下右 控制小O 到达藏宝地 '$'\n\n");
	Sleep(3500);
	system("cls");                         //将规则清屏
	system("color 6");
	printf("\n 第一关:\n");
	Sleep(1000); 
	char  tell6[50]="         -神秘的古格鲁王朝-";
	for(i=0;i<strlen(tell6);i++)
	{
		if(i>8)                           //延迟打印第一关 名称 
		{
			Sleep(80); 
		} 
		printf("%c",tell6[i]); 
	}
	printf("\n");
	Sleep(2000);                        //延迟  清屏 
	system("cls"); 
	openmap(str1,cnt);                      //打开文件和地图         
    updatemap(str1,cnt);                     //更新地图1
    system("color 6"); 
	printf("成功抵达!\n恭喜你带着小O一起获得了古格鲁的第一批宝藏！\n");
	Sleep(2000);
	printf("勇敢者是否要继续冒险呢？寻找古格鲁王朝的终极宝藏！\n(是)请输入y或Y(否)请输入n或N\n");
	judge=getch(); 
	if(judge=='Y'||'y')                        //判断是否继续 
	{
		system("cls"); 
		cnt++;                                 //延迟打印第二关 
		system("color 6");
	    printf("\n 第二关:\n");
	    Sleep(1000); 
	    char  tell7[50]="         -古格鲁王朝的覆灭-";
	    for(i=0;i<strlen(tell7);i++)
	    {
			if(i>8)                           //判断空格 
			{
			Sleep(80); 
			} 
			printf("%c",tell7[i]); 
		}
		printf("\n");
		Sleep(2000);                         //延迟  清屏 
		system("cls");
		printf("\n小O:'小心！古格鲁王朝地面发生震动导致地图改变'\n\n");
        Sleep(2500);  
		openmap(str2,cnt);                     //执行第二关 
		updatemap(str2,cnt);
		system("cls"); 
		printf("\n恭喜你勇士！\n你带领小O获得了古格鲁王朝的终极宝藏 '$'\n\n");
		system("color 6");                    //黄色  结尾段落 
		Sleep(1500); 
		char  tell8[100]="古格鲁王朝的故事即将告一段落,\n但冒险仍会继续，\n小O期待和你的下一次冒险！\n";
	    for(i=0;i<strlen(tell8);i++)
	    {  
			printf("%c",tell8[i]);
			Sleep(80);
		}
		printf("\n");
		char  tell9[20]="...未完待续";
	    for(i=0;i<strlen(tell9);i++)
	    {  
			printf("%c",tell9[i]);
			Sleep(80);
		}
    } 
    else
    {
    	exit(0);                            // 直接退出 
	} 
	system("PAUSE");                        //暂停  
}
/*函数功能:输出故事*/
void tellstory()
{
	int i; 								//控制循环 
	char tell1[100]="... 传说很久以前在遥远的西域古格鲁王朝，百姓富足，人民安乐";
	for(i=0;i<strlen(tell1);i++)
	{
		printf("%c",tell1[i]);
		Sleep(80); 
	}
	printf("\n"); 
	char tell2[100]="王朝在短短的几十年内";
	for(i=0;i<strlen(tell2);i++)
	{
		printf("%c",tell2[i]);
		Sleep(80); 
	}
	printf("\n");
	char tell3[100]="一跃成为西域文化中心,但突然一位外来的神秘人统治了王朝";
	for(i=0;i<strlen(tell3);i++)
	{
		printf("%c",tell3[i]);
		Sleep(80); 
	}
	printf("\n"); 
	char tell4[100]="大肆敛财....";
	for(i=0;i<strlen(tell4);i++)
	{
		printf("%c",tell4[i]);
		Sleep(80); 
	}
	printf("\n\n"); 
	char tell5[100]="巨大的财富被藏在一处迷宫中，唯有找到出口方能获得宝藏！";
	for(i=0;i<strlen(tell5);i++)
	{
		printf("%c",tell5[i]);
		Sleep(80); 
	}
	printf("\n\n"); 
	Sleep(2000); 
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
	     	if(cnt==2)
			{
				cnt1++; 
			} 
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
		if(cnt1==3)                                 //地震情节结束 
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
