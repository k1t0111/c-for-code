#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <string.h> 
#define N 1500 
int line,list,cnt1=0;                              //ȫ�ֱ��� 
void openmap(char str[][100],int cnt);      //�������� 
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
printf("\nСO:'С�ģ��Ÿ�³�������淢���𶯵��µ�ͼ�ı�'\n\n");
Sleep(2000); 
openmap(str2,cnt);                     //ִ�еڶ��� 
updatemap(str2,cnt);	
    return 0;
}
/*�������ܣ���ȡ�ļ��������ͼ*/
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
	showmap(str);                      //չʾ�ؿ���ͼ 
}
/*�������ܣ���������չʾ��ͼ*/
void showmap(char str[][100])
{
	int i,j;								    //i j ��ά����ѭ������ 
	system("color 2");  
	for(i=0;i<line;i++)                        
	{
		for(j=0;j<list;j++)                       //2.1ѭ�����ֵ�ͼ 
		{	
			printf("%c",str[i][j]);					 
		}
		printf("\n");
	}
}
/*�������ܣ����µ�ͼ �� ��������*/
void updatemap(char str[][100],int cnt)
{
	int x,y,exitx,exity;		    		    //3.1����ƽ������ϵ  ����x y���  exitx exity ����  
	char input;				    					//����wasd ������Ʒ���  cnt1 ��ͼ��ͷ����ˢ�� 
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
	while(x!=exitx||y!=exity)                          //3.2ѭ�����µ�ͼ 
	{
		
			cnt1++; 
			input=getch();
			switch(input)                       //������֧�ṹ �жϷ��� 
			{
				case 'a' :y-=1;
					if(y<0)                     //�����ƶ�������� ��� 
					{
						y++;
						system("color 4"); 
						printf("error��СO�Ѿ��ܵ���ͼ����...");
						Sleep(N);                             //�ӳ�
						system("cls");
						showmap(str);
						break; 
					}                    
					if(str[x][y]=='*')      //�ƶ����ϰ� ������ 
					{
						y++;
						system("color 4"); 
						printf("error��ײǽ����СOҪ��ײ����...");
						Sleep(N);                             //�ӳ�
						system("cls");
						showmap(str);
						break; 
					}
						str[x][y]='O';      //�������λ��
						str[x][y+1]=' ';
						break;
				case 'w' :x-=1;       
					if(str[x][y]=='*')      //�ƶ����ϰ� ������ 
					{
						x++; 
						system("color 4"); 
						printf("error��ײǽ����СOҪ��ײ����...");
						Sleep(N);                             //�ӳ�
						system("cls");
						showmap(str);
						break; 
					}
					
						str[x][y]='O';      //�������λ��
						str[x+1][y]=' ';
						break;
					
				case 's' :x+=1;
					if(str[x][y]=='*')      //�ƶ����ϰ� ������ 
					{
						x--;
						system("color 4"); 
						printf("error��ײǽ����СOҪ��ײ����...");
						Sleep(N);                             //�ӳ�
						system("cls");
						showmap(str);
						break; 
					}	
				
						str[x][y]='O';      //�������λ��
					    str[x-1][y]=' ';
					    break;
					
				case 'd' :y+=1;         
					if(str[x][y]=='*')      //�ƶ����ϰ� ������ 
					{
						y--; 
						system("color 4"); 
						printf("error��ײǽ����СOҪ��ײ����...");
			        	Sleep(N);                             //�ӳ�
						system("cls");
						showmap(str);						
						break; 
					}
						str[x][y]='O';      //�������λ��
					    str[x][y-1]=' ';
					    break;
				default :
				system("color  4"); 
				printf("�������룬����wasd�ƶ�");
				Sleep(N); 
				break; 
			}
			/*if(cnt==1)
			{
				system("color 4"); 
				printf("СO:'С�ģ��Ÿ�³�������淢���𶯵��µ�ͼ�ı�'");
				Sleep(2000);
			}*/ 
			/*if(cnt==2)
			{
				system("color 4"); 
				printf("СO:'С�ģ���Խ��Խ����!'");
				Sleep(2000); 
			}*/
			if(cnt1==3)
			{
				system("cls");
				system("color 6"); 
				printf("\n\n�𶯼�����ͼ�ָ����� ����ð�գ�������");
				Sleep(2000); 
			}
		hidecursor();                               //���ع�� 
	    gotoxy(0,0);                                // ����
    	showmap(str);                           //���µ�ͼ����
	} 
}
/*�������ܣ�������Ļ */
void gotoxy(int x,int y) 
{
	HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD  pos;
	pos.X=x;
	pos.Y=y;
	SetConsoleCursorPosition(handle,pos);  
}
/*��������:���ع��*/
void hidecursor()
{
	CONSOLE_CURSOR_INFO cursor_info={1,0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&cursor_info);
}
