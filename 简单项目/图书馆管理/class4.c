#include <Windows.h> 
#include <stdio.h>
int class4()
{
	int n;                                          //����ѡ�� 
	do 
	{
	color(3);                                       //����ɫ 
	printf("\t\t*************************************************************");
	printf("*****************************************\n");
	printf("\t      *\t\t\t\t\t\t\t\t\t\t\t\t\t       *\n");
	printf("\t    *\t\t\t\t\t\t\t");
	color(6);                                       //��ɫ       
	printf("��ѧ��");
	color(3);                                       //����ɫ 
	printf("    \t\t\t\t\t\t *\n"); 
	printf("\t      *\t\t\t\t\t\t\t\t\t\t\t\t\t       *\n");
	printf("\t\t*************************************************************");
	printf("*****************************************\n\n\n\n\n");
	color(11);                                      //ǳ��ɫ 
	printf("\t\t    (1)��ʫ����\t\t\t\t\t\t\t\t\t    (2)�����ǡ�\n\n");
	printf("\t\t\t(3)�����Ĺ�ֹ��\t\t\t\t\t\t\t     (4)����ի־�졷\n\n"); 
	printf("\t\t\t    (5)��������ʷ��\t\t\t\t\t       (6)����Q������\n\n");
	printf("\t\t\t(7)�����꡷\t\t\t\t\t\t\t     (8)��Χ�ǡ�\n\n");
	printf("\t\t\t(9)��ƽ�������硷\t\t\t\t\t\t     (10)�����ּ�ʷ��\n\n");
	printf("\t\t\t(11)��Ų����ɭ�֡�\t\t\t\t\t\t\t(12)������¶���\n\n");
	printf("\t\t\t(13)�������뺣��\t\t\t\t\t\t     (14)���������硷\n\n");
	printf("\t\t    (15)���ü�ڭ�¡�\t\t\t\t\t\t\t\t\t    (16)����ķ���ء�\n\n");
	printf("\t\t\t    (19)���������ĳ��С�\t\t\t\t\t       (20)���軨Ů��\n\n");
	printf("\t\t\t(17)�����Ĺ�ֹ��\t\t\t\t\t\t\t     (18)���ҵ����ֽк졷\n\n");
	color(6);                                        //��ɫ 
	printf("\t\t\t��ѡ����Ҫ���ĵ��鼮:");
	scanf("%d",&n); 
	}while(n<1&&n>20); 
	system("cls");                                   //���� 
	printf("\n\n\n\n\n\t\t\t\t��ϲ�����ĳɹ�������\n\n\t\t\t\t\t����Ϊ���Զ�����ͼ��������....");
	Sleep(3000);                                     //�ӳ�����
	return 1; 
}
