#include <stdio.h>
int isprime(int n);
void ch7_11()
{
	//输入数字 
	int i,n,prime,op;//i主循环控制参数n数字  
	do
	{
	printf("您好，请输入一个数字");
	scanf("%d",&n);
	isprime(n);
	if(isprime(n))
	printf("您的数字是素数，没有其他因数哦；"); 
	else 
	{
		printf("您的数字不是素数，他的因数为\n");
		for(i=1;i<=n;i++)
	{
		if(n%i==0)
		printf("%d\n",i); 
	} 		 
	}
	printf("您是否想继续呢？继续请输入1否则0");
	scanf("%d",&op);
	}
	while(op==1);
}
int isprime(int n)
{
	int j; 
	//判断素数
	for(j=2;j<n;j++)
	{
		if(n%j==0)
		return 0 ;
	} 
	if(n==j)
	return 1; 
}
	 
