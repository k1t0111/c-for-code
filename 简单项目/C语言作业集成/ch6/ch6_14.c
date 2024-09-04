#include <stdio.h>
void ch6_14()
{
	//定义变量并且规定人数 
	int n,man,woman,children,i=1,op;//n总人数 op判断是否继续 
	srand((int)time(NULL));
	do
	{
		 
	printf("请输入您需要的鸡数");
	scanf("%d",&n); 
	do
	{   	//	随机产生数字，满足100块砖 
		man=rand()%n;
		woman=rand()%n;
		children=rand()%n; 
		if(man*5+woman*3+children*(1.0/3.0)==100&&man+woman+children==n)
		{
			printf("需要公鸡%d\n母鸡%d\n小鸡%d\n",man,woman,children);
	  
			break;
          //成功后跳出			
		}
		
	 }
	 while(i=1); 
	 printf("需要继续吗？继续的话请输入1否则2\n");
	 scanf("%d",&op); 
	  
	}
	//多次重复
	while(op=1); 
}
