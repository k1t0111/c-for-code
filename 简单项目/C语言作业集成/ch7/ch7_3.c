#include <stdio.h>
int Findmax(int num1,int num2);
void ch7_3()
{
	int num1,num2; 
	//1������������
	printf("���ã���ӭ����С���򣡣���\n");
	printf("������������������\n");
	scanf("%d%d",&num1,&num2);
	//2�����󹫱��� 
	//3��������� 
	printf("����������ֵ���С������Ϊ%d",Findmax(num1,num2)); 
}
int Findmax(int num1,int num2)
{
	int i;
	for(i=1;;i++)
	{
		if(i%num1==0&&i%num2==0)
		break;
	} 
	return  i;
}
