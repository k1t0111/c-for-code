#include <stdio.h>
int Gcd(int num1,int num2);
void ch7_8()
{	
	int op;
	do
{
	//1.输入两个数
	int num1,num2;
	printf("请输入两个整数:");
	scanf("%d%d",&num1,&num2);
	//2.输出最大公约数
	printf("您的最大公约数为:%d\n是否需要继续需要的话请输入1否则2\n",Gcd(num1,num2));
	scanf("%d",&op);	 
} 
	while(op==1); 
}  
int Gcd(int num1,int num2)
{
	//3.利用条件判断语句来进行递归
	if(num1>num2)
	return Gcd(num1-num2,num2);
	else
	if(num1<num2)
	return Gcd(num1,num2-num1);
	else
	return num1; 
}
 
