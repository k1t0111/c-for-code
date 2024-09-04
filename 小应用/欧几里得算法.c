/***************************

c语言 
实现欧几里得算法

                         --作者:kit 
****************************/
#include <stdio.h> 

/*函数功能:交换两个变量的值*/
void swap(int *num1,int *num2)
{
	int temp;                    //temp 中间变量
	temp=*num1;
	*num1=*num2;
	*num2=temp; 
}
 

int main()
{
	int num1,num2,num3;         //num1 保存被除数  num2 保存被除数  num3 保存余数 
	printf("请输入您的求最大公约数的两个数字:");
	scanf("%d%d",&num1,&num2);
	if(num1<num2)               //保证num1大于num2 
	swap(&num1,&num2); 
	do
	{
		num3=num1%num2;
		num1=num2;
		num2=num3; 
	} 
	while(num3!=0);
	printf("您好,你的最大公约数为:%d",num1);
	return 0; 
}

