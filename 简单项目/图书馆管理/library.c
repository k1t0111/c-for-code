#include <stdio.h>
#include <Windows.h>
int return_back2=1; 
int library()
{
	int option;                                    //����ѡ�� 
    while(return_back2==1)
	{
	color(3);                              //����ɫ 
	printf("\t\t*************************************************************");
	printf("*****************************************\n");
	printf("\t      *\t\t\t\t\t\t\t\t\t\t\t\t\t       *\n");
	printf("\t    *\t\t\t\t\t\t");
	color(6);                                       //��ɫ       
	printf("��ӭ����ͼ��Ԥ������");
	color(3);                                       //����ɫ 
	printf("\t\t\t\t\t\t *\n"); 
	printf("\t      *\t\t\t\t\t\t\t\t\t\t\t\t\t       *\n");
	printf("\t\t*************************************************************");
	printf("*****************************************\n\n\n\n\n");
	color(14);                                      //����ɫ 
	printf("\t\t\t   (һ)\t\t\t\t\t\t\t\t \t   (��)\n");
	color(15);                                      //��ɫ 
	printf("\t\t\t--��ѧ��--      \t\t\t\t\t\t\t--��ѧ��--\n\n\n\n\n");
	color(14);                                      //����ɫ 
	printf("\t\t\t   (��)\t\t\t\t\t\t\t\t \t   (��)\n"); 
	color(15);                                      //��ɫ 
	printf("\t\t\t--������--      \t\t\t\t\t\t      --�Ļ�������--\n\n\n\n\n");
	color(14);                                      //����ɫ 
	printf("\t\t\t   (��)\t\t\t\t\t\t\t\t \t   (��)\n");
	color(15);                                      //��ɫ 
	printf("\t\t      --�ƾ�������--      \t\t\t\t\t\t      --��ʷ������--\n\n\n\n\n");
	color(14);                                      //����ɫ 
	printf("\t\t\t   (��)\t\t\t\t\t\t\t\t \t   (��)\n");
	color(15);                                      //��ɫ 
	printf("\t\t      --���η�����--      \t\t\t\t\t\t      --��Ȼ��ѧ��--\n\n\n\n\n");
	printf("\t\t\t�˳�  ������  9");
	color(6);                                       //��ɫ 
	printf("\t\t\t--����������Ҫ��ͼ�����Ӵ:");
	scanf_s("%d",&option);
	switch(option)                                  //switch����ѡ�� 
	{
		case 1 :system("cls");return_back2=class1();system("cls");break;
		case 2 :system("cls");return_back2=class2();system("cls");break;
		case 3 :system("cls");return_back2=class3();system("cls");break;  
		case 4 :system("cls");return_back2=class4();system("cls");break;
		case 5 :system("cls");return_back2=class5();system("cls");break;
		case 6 :system("cls");return_back2=class6();system("cls");break;
		case 7 :system("cls");return_back2=class7();system("cls");break;
		case 8 :system("cls");return_back2=class8();system("cls");break;
		case 9 :return 1; 
	}
	} 
}           
