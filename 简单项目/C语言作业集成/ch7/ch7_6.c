#include <stdio.h>
int Ged(int num1,int num2);
void ch7_6()
{
	
//1.������������
	int num1,num2;
	printf("��������������:");
	scanf("%d%d",&num1,&num2);
	//4.�����Լ�� 
	printf("�������Լ��Ϊ%d",Ged(num1,num2));
}

int Ged(int num1,int num2)
{
	//����min��ʾ���Լ��
	//2.�ж���Сֵ
	int min; 
	if(num1-num2<=0)
	min=num1;
	else
	min=num2;
	//3.ѭ���ҹ�Լ��
    for(;min>0;min--)
{
	if(num1%min==0&&num2%min==0)
	return min;
}
}

