#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>
#include <io.h> 
#include <sys/stat.h>
int  return_back=1;                                //�����ⲿ����������һ��Ŀ¼ 
int  number=0;                                     //�����ⲿ������¼���� 
void menu();                                       //����������¼����˵� 
int  Adduser();                                    //���������û�ע��
int  Entry();                                      //���������û���¼
int  Change();                                     //���������޸�����
void color(int x);                                 //���������޸���ɫ 
int  countnum();                                   //�����������ҳ�Ա���� 
int  main()
{
	int n;                                         //n�������ѡ�� 
	while(return_back)
	{
		color(6);                                  //��ɫ                                  
		printf("\n\n\n\t\t\t\t\t��ӭ����ѧϰ�Լ�ͼ��ݹ���ϵͳ���棡����\n\n\n\n\n"); 
		menu();
		color(11);                                 //��ɫ 
		printf("\t\t\t\t\t��ѡ�����");
		scanf_s("%d",&n);	
		switch(n)                                  //switch����ѡ�� 
		{
			                                       //ע���������� 
			case 1 :system("cls");return_back=Adduser();system("cls");break; 
			case 2 :          
			system("cls");                         //��½�ɹ�����ҳ����ת
			if(return_back=Entry()==1)
			return_back=abilityface(); 
			break;     
			case 3 :exit(0); 
			default:system("cls");
			printf("������������"); 
		}
    } 
}
/*��������:��ʾ��ʼ����˵�*/
void menu()
{
	color(9);                                       //��ɫ 
	printf("    **************\t\t\t\t     ************************************\t\t\t\t**************\n");
	color(15);                                      //����ɫ 
    printf("          \t *\t\t\t\t\t   ע�����˺� �밴 1         \t\t\t\t\t*\n");
    printf("          \t *\t\t\t\t\t   ��¼       �밴 2         \t\t\t\t\t*\n");
    printf("          \t *\t\t\t\t\t   �˳�����   �밴 3         \t\t\t\t\t*\n"); 
    color(9);                                       //��ɫ 
    printf("    **************\t\t\t\t     ************************************\t\t\t\t**************\n\n\n");	
} 
/*��������:ע���û�*/
int Adduser()
{
	FILE *fp;                                       //�ļ�����ָ�� 
	char id[10],passwd[10];                         // id �����˺�  passwd �������� 
	int i;                                          //i ����ѭ��         
	color(2);                                       //��ɫ 
	printf("\n\n\n\t\t\t\t\t��ӭ����ϵͳע����棡��\n\n");
	number=countnum();                              //��¼����
	number++; 
	printf("\t\t\t\t\t�������ǵĵ�%dλ�û�\n",number);
	printf("\t\t\t\t\t�����û���ʶ��Ϊ%d���ס�����û����Ŷ������\n",number); 
	color(6);                                       //��ɫ 
	printf("\t\t\t\t\tע�����˺�:(��������λ����)");
	scanf_s("%s",id);
	printf("\t\t\t\t\tע��������:(��������λ�ַ�)");
	scanf_s("%s",passwd);                           //���ļ�׼��д�� 
	fp=fopen("D:\\idpasswd.txt","a+"); 
	if(fp==NULL)                                    //�ļ�δ�ɹ��򿪴��� 
	printf("�ļ���ʧ��");
	for(i=0;i<8;i++)                                //���˺�д���ĵ� 
	fputc(id[i],fp);
	for(i=0;i<8;i++)
	fputc(passwd[i],fp);                            //������д���ĵ� 
	fclose(fp);
	color(2);                                       //��ɫ 
	printf("\t\t\t\t\t���ǵ�%dλ�û����ɹ�ע�ᣡ����",number);
	system("PAUSE"); 
	return 1; 
}
/*��������:��¼�û�*/ 
int Entry()
{
	FILE *fp;                                       //�ļ�����ָ�� 
	char id[10],id1[10],passwd[10],passwd1[10];     // id�����˺�id1��֤ passwd ����passwd1��֤ 
	int i;                                          //i ����ѭ��       
	color(2);                                       //��ɫ 
	printf("\n\n\n\t\t\t\t\t��ӭ����ϵͳ�ĵ�¼���棡��\n\n");
	printf("\t\t\t\t\t�����������û����:");
	scanf_s("%d",&number); 
	color(6);                                       //��ɫ 
	printf("\t\t\t\t\t�����������˺�:");
	scanf_s("%s",id);
	printf("\t\t\t\t\t��������������:");
	scanf_s("%s",passwd);                           //���ļ�׼��д�� 
	fp=fopen("D:\\idpasswd.txt","a+"); 
	if(fp==NULL)                                    //�ļ�δ�ɹ��򿪴��� 
	printf("�ļ���ʧ��");	
	fseek(fp,(number-1)*16,SEEK_SET);               //�ĵ����ݶ�ȡλ�� 
	for(i=0;i<8;i++)                                //���˺Ŷ������� 
	id1[i]=fgetc(fp);
	for(i=0;i<8;i++)
	passwd1[i]=fgetc(fp);                           //������������� 
	fclose(fp);
    if(strcmp(id,id1)!=0&&strcmp(passwd,passwd1)!=0)
	{
		color(6);                                   //��ɫ 
		printf("���ã���������˺������д�������������");
		Sleep(1000);                                 
		system("cls");                              //�ӳٺ����� 
		Entry(); 
	}
	else
	printf("\n��ϲ�����ɹ���¼\n�����Զ���ת......");
	Sleep(1000);                                    //�ӳٺ����� 
	system("cls");
	return 1;  
}
/*��������:�޸��û�����*/ 
/*int Change()
{  
	char id[10],passwd[10],op;                      //id �����˺�  passwd�������� opѭ��ȡ���ַ� 
	FILE *fp,*fpw;                                  //fp ����ԭʼ���� fpw�����޸����� 
	int i;                                          //i ����ѭ��         
	color(2);                                       //��ɫ 
	printf("\n\n\n\t\t\t\t\t��ӭ����ϵͳ���˺��޸Ľ��棡��\n\n");
	printf("\t\t\t\t\t�����������û����:");
	scanf_s("%d",&number); 
	color(6);                                       //��ɫ 
	printf("\t\t\t\t\t�������������˺�:(��������λ����)");
	scanf_s("%s",id);
	printf("\t\t\t\t\t����������������:(��������λ�ַ�)");
	scanf_s("%s",passwd);                     
	fp=fopen("D:\\idpasswd.txt","a+");              //���ļ�fp   
	fpw=fopen("D:\\idpasswd1.txt","a+");             //���ļ�fpw 
	for(i=1;i<=(number-1)*16;i++)
	{
		op=fgetc(fp);                               //��passwd�ļ����ݷ���passwd1 
		fputc(op,fpw); 
	}
	for(i=0;i<8;i++)                                //�����˺�д���ĵ� 
	fputc(id[i],fpw);
	for(i=0;i<8;i++)
	fputc(passwd[i],fpw);                           //��������д���ĵ� 
	fseek(fp,number*16,SEEK_SET);                   //�ĵ���������λ�øı�
	while(1)
	{
		op=fgetc(fp);                               //��ȡ�޸�����֮������� 
		if(op==EOF)                                 //������ʱ ����ѭ�� 
		break; 
		fputc(op,fpw);                              //д���ĵ� 
	}
	fclose(fp);                                     //�ر��ĵ� 
	fclose(fpw);
	printf("����ɹ��޸ģ�����Ϊ���Զ���ת"); 
	chmod("D:\\idpasswd",S_IWUSR);
	chmod("D:\\idpasswd1",S_IWUSR); 
	delreplace();                                   //ɾ���ĵ�
	Sleep(5000); 
	return 1; 
}*/
/*��������:�ı�������ֵ���ɫ*/
void color(int x)
{
	                                                //�Զ�����ɫ����
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
}
/*��������:��¼�û�����*/
int  countnum()
{
	int cnt=0;                                      //cnt��¼���� 
	char op='a';                                    //op��������ַ� 
	FILE *fp;                                       //�ļ�����ָ�� 
	fp=fopen("D:\\idpasswd.txt","a+"); 
	if(fp==NULL)                                    //�ļ���ʧ�ܹ��� 
	printf("�ļ���ʧ�ܣ�");
	while(op!=EOF)                                  //ѭ����ȡ�ַ�
	{
		op=fgetc(fp);
		cnt++;                                      //cnt�����һ 
	}
	cnt=(cnt-1)/16;                                 //������� 
	return cnt; 
}
