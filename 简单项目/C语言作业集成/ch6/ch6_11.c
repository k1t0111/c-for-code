#include <stdio.h>
void ch6_11()
{
	//定义变量各项 term 总合sum
	int term,sum=0;
	//输入整数
	for(;term!=0;)	
	{
		printf("请输入一个整数，0代表输入结束");
		scanf("%d",&term);
	//判断正负 
		if(term>0) 
		sum+=term; 
	 } 
	 printf("%d",sum); 
}
