#include <stdio.h>
#include <Windows.h>
int return_back1=1;                                 //ȫ�ֱ���return_back1 ���ں������� 
int abilityface()                                             
{
	while(return_back1)                  
	{
	color(3);                                       //����ɫ 
	printf("\t\t*************************************************************");
	printf("*****************************************\n");
	printf("\t      *\t\t\t\t\t\t\t\t\t\t\t\t\t       *\n");
	printf("\t    *\t\t\t\t\t\t");
	color(6);                                       //��ɫ       
	printf("ѧϰ��ͼ��ݹ���ϵͳ");
	color(3);                                       //����ɫ 
	printf("\t\t\t\t\t\t *\n"); 
	printf("\t      *\t\t\t\t\t\t\t\t\t\t\t\t\t       *\n");
	printf("\t\t*************************************************************");
	printf("*****************************************\n\n\n\n\n");
	color(13);                                      //����ɫ 
	printf("\t\t\t    (һ)\t\t\t\t\t\t\t\t    (��)\n");
	color(11);                                      //����ɫ 
	printf("\t\t\t--ͼ�����--      \t\t\t\t\t\t\t--��λԤ��--\n\n\n\n\n");
	color(13);                                      //����ɫ
	printf("\t\t\t\t\t\t\t      (��)\n");
	color(11);                                      //����ɫ
	printf("\t\t\t\t\t\t\t   --ѧϰ��--\n\n\n\n\n");
	color(13);                                      //����ɫ 
	printf("\t\t\t\t  (��)\t\t\t\t\t\t\t    (��)\n");
	color(11);                                      //����ɫ 
	printf("\t\t \t     --���ܽ���--    \t\t\t\t\t\t--��������--\n\n\n\n");
	color(13);                                      //����ɫ 
	printf("\t\t\t\t\t\t\t      (��)\n"); 
	color(11);                                      //ǳ��ɫ 
	printf("\t\t\t\t\t\t\t    �˳���¼\n\n\n"); 
	int option;                                     //option�������ѡ�� 
	color(6);                                       //��ɫ 
	printf("\t\t\t--����������Ҫ�ķ���:");
	scanf_s(" %d",&option);
	switch(option)                                  //switch����ѡ�� 
	{
		case 1 :system("cls");return_back1=library();system("cls");break;
		case 2 :system("cls");return_back1=seat();system("cls");break;
		case 3 :break;
													//��ʱ������//����Ϊ1�����ѭ��  
		case 4 :system("cls");return_back1=ability();system("cls");break;     
		case 5 :system("cls");return_back1=We();     system("cls");break;
		case 6 :system("cls");return 1;             //�˳���¼ 
	}
	}  
} 

