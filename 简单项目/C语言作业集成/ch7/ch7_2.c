//两个整数的最大值
#include <stdio.h>
//声明函数max
int max(int num1,int num2); 
void ch7_2()
{   int num1,num2;
	printf("请输入两个不同的整数:");
	scanf("%d%d",&num1,&num2);
	//返回最大值函数 
	printf("其中最大值为%d",max(num1,num2));
}
int max(int num1,int num2)
{
	//利用判断语句
	if(num1-num2<=0)
	return num2;
	else
	return num1;  
} 
