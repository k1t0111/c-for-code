/***************************

c���� 
ʵ��ŷ������㷨

                         --����:kit 
****************************/
#include <stdio.h> 

/*��������:��������������ֵ*/
void swap(int *num1,int *num2)
{
	int temp;                    //temp �м����
	temp=*num1;
	*num1=*num2;
	*num2=temp; 
}
 

int main()
{
	int num1,num2,num3;         //num1 ���汻����  num2 ���汻����  num3 �������� 
	printf("���������������Լ������������:");
	scanf("%d%d",&num1,&num2);
	if(num1<num2)               //��֤num1����num2 
	swap(&num1,&num2); 
	do
	{
		num3=num1%num2;
		num1=num2;
		num2=num3; 
	} 
	while(num3!=0);
	printf("����,������Լ��Ϊ:%d",num1);
	return 0; 
}

