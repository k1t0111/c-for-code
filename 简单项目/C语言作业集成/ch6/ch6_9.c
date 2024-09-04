#include <stdio.h>
void ch6_9()
{
	//定义变量内循环sum 和 term 项数 i控制同时外循环SUM输入n结果m
 
	int sum=1,term=1,i,SUM=0,n,m;
	printf("请输入您期待的一个值n：");
	scanf("%d",&n); 
	//外循环控制项数 
	for(m=0;SUM<=n;m++)
	{
	//内循环控制每一项 
	for(i=0;i<=m;i++)
	{
		
	term=i+1;
	sum*=term;
		
	}
	
	SUM+=sum;
	
	}
	m--; 
	printf("您的m值为%d",m); 
} 
