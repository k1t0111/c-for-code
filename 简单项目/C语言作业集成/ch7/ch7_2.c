//�������������ֵ
#include <stdio.h>
//��������max
int max(int num1,int num2); 
void ch7_2()
{   int num1,num2;
	printf("������������ͬ������:");
	scanf("%d%d",&num1,&num2);
	//�������ֵ���� 
	printf("�������ֵΪ%d",max(num1,num2));
}
int max(int num1,int num2)
{
	//�����ж����
	if(num1-num2<=0)
	return num2;
	else
	return num1;  
} 
