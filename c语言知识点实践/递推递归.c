#include <stdio.h>
#include <math.h>
int f_iteration(int n);
int f_recursion(int n);
main()
{
 
	int n;
	printf("请输入一个正整数：");
	scanf("%d",&n);	
	printf("用递推法计算:f(%d)=%d\n",n,f_iteration(n));	
	printf("用递归法计算:f(%d)=%d\n",n,f_recursion(n));
}

int f_iteration(int n)
{
	int i,res,num1=1,num2=1;
	for(i=3;i<=n;i++)
	{
		res=3*num1+num2*2;
		num1=num2; 
		num2=res; 
	} 
	return res;
} 
int f_recursion(int n)
{
	//定义结果
	int res; 
	if(n==1||2)
	res=1;
	if(n>2)
	res=3*f_recursion(n-2)+2*f_recursion(n-1);
	return res;
}
