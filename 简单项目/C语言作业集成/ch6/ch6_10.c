#include <stdio.h>
void ch6_10()
{
	//定义变量各项 term 总合sum
	int term,sum=0;
	//输入整数
	for(;term>0;)
	{
		printf("请输入一个正数若输入负数或者0代表输入结束");
		scanf("%d",&term);
		sum+=term; 
	 } 
	 printf("%d",sum); 
}
