#include <stdio.h>
int Gcd(int num1,int num2);
void ch7_8()
{	
	int op;
	do
{
	//1.����������
	int num1,num2;
	printf("��������������:");
	scanf("%d%d",&num1,&num2);
	//2.������Լ��
	printf("�������Լ��Ϊ:%d\n�Ƿ���Ҫ������Ҫ�Ļ�������1����2\n",Gcd(num1,num2));
	scanf("%d",&op);	 
} 
	while(op==1); 
}  
int Gcd(int num1,int num2)
{
	//3.���������ж���������еݹ�
	if(num1>num2)
	return Gcd(num1-num2,num2);
	else
	if(num1<num2)
	return Gcd(num1,num2-num1);
	else
	return num1; 
}
 
