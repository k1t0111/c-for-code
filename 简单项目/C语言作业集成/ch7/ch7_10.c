#include <stdio.h>
int isprime1(int i);
void ch7_10()
{
	//输入范围
	int i,n,term,sum=0;//i主循环控制参数n范围临界 
	printf("您好，请输入您需要的素数判断范围最大数字");
	scanf("%d",&n);
	//主循环
	for(i=2;i<=n;i++)
	{
	//求和
		term=isprime1(i);
		sum+=term; 
	}
	//输出返回
	printf("%d",sum); 		 
	
}

int isprime1(int i)
{
	int j; 
	//判断素数
	for(j=2;j<i;j++)
	{
		if(i%j==0)
		return 0 ;
	} 
	if(i==j)
	return i; 
}
	
	 
