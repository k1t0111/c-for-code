#include <Windows.h> 
#include <stdio.h>
int class7()
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
	printf("���η�����");
	color(3);                                       //����ɫ 
	printf("    \t\t\t\t\t\t *\n"); 
	printf("\t      *\t\t\t\t\t\t\t\t\t\t\t\t\t       *\n");
	printf("\t\t*************************************************************");
	printf("*****************************************\n\n\n\n\n");
	color(11);                                      //ǳ��ɫ 
	printf("����ʶ��\n");
	printf("�������ۡ�\n");
	printf("�������ۡ�\n");
	printf("�����ֶ���\n");
	printf("��������ǰ��\n");
	printf("������֮�š�\n");
	printf("����Ѩ�永��\n");
	printf("��������֤��\n");
	printf("���˿�ԭ��\n");
	printf("���ͷ����硷\n");
	printf("�������Լ�ۡ�\n");
	printf("��������ͨ�ġ�\n");
        printf("���̷���˽�ӡ�\n");
	printf("���绤�����Ρ�\n");
	printf("��������ļ���\n");
	printf("�������������\n");
	printf("�����÷�չ���ۡ�\n");
	printf("����ȻȨ�����Ų���\n");
	printf("�����ƶ���������\n");
	printf("��������������Ǻá�\n");
	color(6);                                        //��ɫ 
	printf("\t\t\t��ѡ����Ҫ���ĵ��鼮:");
	scanf("%d",&n); 
	}while(n<1&&n>20); 
	system("cls");                                   //���� 
	printf("\n\n\n\n\n\t\t\t\t��ϲ�����ĳɹ�������\n\n\t\t\t\t\t����Ϊ���Զ�����ͼ��������....");
	Sleep(3000);                                     //�ӳ�����
	return 1; 
}
