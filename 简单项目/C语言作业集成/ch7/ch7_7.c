#include <stdio.h>
int Gcd1(int num1,int num2);
void ch7_7()
{	//1.����������
	int num1,num2;
	printf("��������������:");
	scanf("%d%d",&num1,&num2);
	//2.������Լ��
	printf("�������Լ��Ϊ:%d",Gcd1(num1,num2)); 
}  

int Gcd1(int num1,int num2)
{
	//3.�жϴ�Сֵ 
	//t����ת����ֵresult���ж�ѭ����� 
	int t,result;
	if(num1-num2<=0)
{
	t=num1;
	num1=num2;
	num2=t;	
}
    //4.ѭ�����
    for(;;)
{
	result=num1%num2;
	if(result!=0)
{
	num1=num2;
	num2=result; 
} 
	else
	return num2; 	
} 
	 
}
