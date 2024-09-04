#include <stdio.h>
int Ged(int num1,int num2);
void ch7_6()
{
	
//1.输入两个整数
	int num1,num2;
	printf("请输入两个整数:");
	scanf("%d%d",&num1,&num2);
	//4.输出公约数 
	printf("您的最大公约数为%d",Ged(num1,num2));
}

int Ged(int num1,int num2)
{
	//利用min表示最大公约数
	//2.判断最小值
	int min; 
	if(num1-num2<=0)
	min=num1;
	else
	min=num2;
	//3.循环找公约数
    for(;min>0;min--)
{
	if(num1%min==0&&num2%min==0)
	return min;
}
}

