#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <string.h> 
#define N 1500 
int line,list;                              //ȫ�ֱ��� 
void openmap(char str[][100],int cnt);      //�������� 
void tellstory();
void showmap(char str[][100]);
void updatemap(char str[][100],int cnt);
void gotoxy(int x,int y); 
void hidecursor();
main()
{
//(1)���ļ� �ѵ�ͼ���Ƶ���ά������
	char str[100][100],judge;                 //str ��ά���鱣���ͼ  judge�ж� 
	int cnt=2,i;                            //��¼�ؿ� 
	system("color 3");                     //ǳ��ɫ 
	printf("\n����ӭ����Ѱ��̽�أ�������Ķ���СO�����տ�ʼඣ���\n\n"); 
	Sleep(3000);                           
	system("color 6");                     //��ɫ 
	tellstory();
	system("color 3");                     //ǳ��ɫ 
	printf("��׼���ú�СOһ��ȥ̽�����𣿡�\n");
	system("PAUSE");                       //��ͣ           
	system("cls");                     
	system("color c");                     //ǳ��ɫ 
	printf("\nѰ������:��wasdΪ������������� ����СO ����ر��� '$'\n\n");
	Sleep(3500);
	system("cls");                         //����������
	system("color 6");
	printf("\n ��һ��:\n");
	Sleep(1000); 
	char  tell6[50]="         -���صĹŸ�³����-";
	for(i=0;i<strlen(tell6);i++)
	{
		if(i>8)                           //�ӳٴ�ӡ��һ�� ���� 
		{
			Sleep(80); 
		} 
		printf("%c",tell6[i]); 
	}
	printf("\n");
	Sleep(2000);                        //�ӳ�  ���� 
	system("cls"); 
	openmap(str,cnt);                      //���ļ��͵�ͼ         
    updatemap(str,cnt);                     //���µ�ͼ1
	printf("�ɹ��ִ�!\n��ϲ�����СOһ�����˹Ÿ�³�ĵ�һ�����أ�\n");
	Sleep(2000);
	printf("�¸����Ƿ�Ҫ����ð���أ�Ѱ�ҹŸ�³�������ռ����أ�\n(��)������y��Y(��)������n��N\n");
	scanf(" %c",&judge);
	if(judge=='Y'||'y')                        //�ж��Ƿ���� 
	{
		system("cls"); 
		cnt++;                                 //�ӳٴ�ӡ�ڶ��� 
		system("color 6");
	    printf("\n �ڶ���:\n");
	    Sleep(1000); 
	    char  tell7[50]="         -�Ÿ�³�����ĸ���-";
	    for(i=0;i<strlen(tell7);i++)
	    {
			if(i>8)                           //�жϿո� 
			{
			Sleep(80); 
			} 
			printf("%c",tell7[i]); 
		}
		printf("\n");
		Sleep(2000);                         //�ӳ�  ���� 
		system("cls"); 
		openmap(str,cnt);                     //ִ�еڶ��� 
		updatemap(str,cnt);
		system("cls"); 
		printf("\n��ϲ����ʿ��\n�����СO����˹Ÿ�³�������ռ����� '$'\n\n");
		system("color 6");                    //��ɫ  ��β���� 
		Sleep(1500); 
		char  tell8[100]="�Ÿ�³�����Ĺ��¼�����һ����,\n��ð���Ի������\nСO�ڴ��������һ��ð�գ�\n";
	    for(i=0;i<strlen(tell8);i++)
	    {  
			printf("%c",tell8[i]);
			Sleep(80);
		}
		printf("\n");
		char  tell9[20]="...δ�����";
	    for(i=0;i<strlen(tell9);i++)
	    {  
			printf("%c",tell9[i]);
			Sleep(80);
		}
    } 
    else
    {
    	exit(0);                            // ֱ���˳� 
	} 
	system("PAUSE");                        //��ͣ  
}
/*��������:�������*/
void tellstory()
{
	int i; 								//����ѭ�� 
	char tell1[100]="... ��˵�ܾ���ǰ��ңԶ������Ÿ�³���������ո��㣬������";
	for(i=0;i<strlen(tell1);i++)
	{
		printf("%c",tell1[i]);
		Sleep(80); 
	}
	printf("\n"); 
	char tell2[100]="�����ڶ̶̵ļ�ʮ����";
	for(i=0;i<strlen(tell2);i++)
	{
		printf("%c",tell2[i]);
		Sleep(80); 
	}
	printf("\n");
	char tell3[100]="һԾ��Ϊ�����Ļ�����,��ͻȻһλ������������ͳ��������";
	for(i=0;i<strlen(tell3);i++)
	{
		printf("%c",tell3[i]);
		Sleep(80); 
	}
	printf("\n"); 
	char tell4[100]="��������....";
	for(i=0;i<strlen(tell4);i++)
	{
		printf("%c",tell4[i]);
		Sleep(80); 
	}
	printf("\n\n"); 
	char tell5[100]="�޴�ĲƸ�������һ���Թ��У�Ψ���ҵ����ڷ��ܻ�ñ��أ�";
	for(i=0;i<strlen(tell5);i++)
	{
		printf("%c",tell5[i]);
		Sleep(80); 
	}
	printf("\n\n"); 
	Sleep(2000); 
} 
/*�������ܣ���ȡ�ļ��������ͼ*/
void openmap(char str[][100],int cnt)
{
	int i,j; 					        //i j ���ƶ�ά����ѭ��  ��ͼ��line �� list 
	FILE *fp;							 //fp �ļ�ָ�� op ��ͼ�ַ� file �����ͼ�ļ�·�� pָ��ѡ�� 
	char op,file2[100]="D:\\�������\\2022��һc����\\Ѱ���Թ�\\map2.txt",
	file1[100]="D:\\�������\\2022��һc����\\Ѱ���Թ�\\map1.txt",*p;
	if(cnt==1)
	{
		p=file1;
		line=21;
		list=22; 
	}
	else
	{
		p=file2;
		line=41;
		list=42; 
	} 
	fp=fopen(p,"r"); 						     //1.1���ļ� 
	if(fp==NULL)								 //��֤��ȡ�Ƿ� 
	{
		printf("��ʧ��");
		exit(0); 
	}
	for(i=0;i<line;i++)                          //1.2�����ļ� 
	{
		for(j=0;j<list;j++)
		{
			op=fgetc(fp);						 //��ȡ�ַ� 
			str[i][j]=op; 
		}
	} 
	fclose(fp);									 //�ر��ļ� 
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
