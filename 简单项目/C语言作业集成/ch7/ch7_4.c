#include <stdio.h>
int Fact(int i);
void ch7_4()
{
	int num1,i,cnt=0;//i控制循环  cnt计数 
	//1输入求阶乘的范围 
	printf("您好！欢迎来到小程序！！！\n");
	printf("请您输入最大值：\n");
	scanf("%d",&num1);
	//循环求整数的阶乘
	for(i=1;i<=num1;i++) 
	{
		printf("第%d个：%d    ",i,Fact(i)); 
		cnt++;
		//用来表示输出格式化 
		if(cnt%4==0)
		printf("\n"); 
	} 
}
int Fact(int i)
{
	if(i==1)
	return 1;
	else 
	return i*Fact(i-1);
}
