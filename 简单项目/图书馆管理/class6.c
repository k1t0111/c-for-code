#include <Windows.h> 
#include <stdio.h>
int class6()
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
	printf("����������");
	color(3);                                       //����ɫ 
	printf("    \t\t\t\t\t\t *\n"); 
	printf("\t      *\t\t\t\t\t\t\t\t\t\t\t\t\t       *\n");
	printf("\t\t*************************************************************");
	printf("*****************************************\n\n\n\n\n");
	color(11);                                      //ǳ��ɫ 
	printf("������ǡ�\n");
	printf("��Ư��¼��\n");
	printf("��ɽ������\n");
	printf("����ˮ����\n");
	printf("����־�롷\n");
	printf("���϶ɱ��顷\n");
	printf("��ˮ��ע�衷\n");
	printf("���ٳ���ˮ��\n");
	printf("���������¡�\n");
	printf("��ְ����͡�\n");
	printf("���������־��\n");
	printf("����ͨ�뽻����\n");
	printf("���Ϸ�������\n");
	printf("��������ʷ��\n");
	printf("����ϼ���μǡ�\n");
	printf("���й���ʷ��ͼ����\n");
	printf("��ǹ�ڡ������������\n");
	printf("��ϣ�������������\n");
	printf("��ææµµ�Ĵ��˺ӡ�\n");
	printf("����ʷ�Ŀռ���ռ����ʷ��\n");
	color(6);                                        //��ɫ 
	printf("\t\t\t��ѡ����Ҫ���ĵ��鼮:");
	scanf("%d",&n); 
	}while(n<1&&n>20); 
	system("cls");                                   //���� 
	printf("\n\n\n\n\n\t\t\t\t��ϲ�����ĳɹ�������\n\n\t\t\t\t\t����Ϊ���Զ�����ͼ��������....");
	Sleep(3000);                                     //�ӳ�����
	return 1; 
}
