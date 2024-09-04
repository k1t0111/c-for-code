#include <stdio.h>
#include <stdlib.h>
void ch7_13()
{
	srand((int)time(NULL)); 				
	int num1,num2,num3,result,cnt=0;              /*三个数字表达表达式 cnt计数 result输入结果*/
	printf("你好啊！小朋友。欢迎来到乘法运算程序！\n小试牛刀！！！\n");
	do 
	{
		num1=rand()%10; 	
		num2=rand()%10;
		num3=num1*num2;							   /*算出随机数的积*/
		printf("第一题：%d * %d = ？",num1,num2);
		scanf("%d",&result);
		if(result==num3)						   /*判断结果*/
		printf("Right！\n");
		else
		{
			if(cnt==2)
		    {
			    printf("Wrong! You have tried three times! Test over!\n");
				exit(0); 
		    }
			printf("Wrong！please try again！\n");
			cnt++; 
		}  
	} 
	while(result!=num3); 
}  
