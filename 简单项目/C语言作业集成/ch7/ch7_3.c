#include <stdio.h>
int Findmax(int num1,int num2);
void ch7_3()
{
	int num1,num2; 
	//1输入两个整数
	printf("您好！欢迎来的小程序！！！\n");
	printf("请您输入两个整数：\n");
	scanf("%d%d",&num1,&num2);
	//2穷举最大公倍数 
	//3输出公倍数 
	printf("您输入的数字的最小公倍数为%d",Findmax(num1,num2)); 
}
int Findmax(int num1,int num2)
{
	int i;
	for(i=1;;i++)
	{
		if(i%num1==0&&i%num2==0)
		break;
	} 
	return  i;
}
