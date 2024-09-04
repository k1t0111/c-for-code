#include <stdio.h>
int Gcd1(int num1,int num2);
void ch7_7()
{	//1.输入两个数
	int num1,num2;
	printf("请输入两个整数:");
	scanf("%d%d",&num1,&num2);
	//2.输出最大公约数
	printf("您的最大公约数为:%d",Gcd1(num1,num2)); 
}  

int Gcd1(int num1,int num2)
{
	//3.判断大小值 
	//t用来转换数值result来判断循环相除 
	int t,result;
	if(num1-num2<=0)
{
	t=num1;
	num1=num2;
	num2=t;	
}
    //4.循环相除
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
