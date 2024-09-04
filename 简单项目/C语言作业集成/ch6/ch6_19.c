#include <stdio.h>
void ch6_19()
{
//定义变量时间time和总合sum
int time,sum;
//循环穷举法
for(time=30,sum=61;time<=140;time++)
{
//判断减去的数量
if((time%5==0&&time%6==0)||(time%6==0&&time%7==0)||(time%5==0&&time%7==0))
sum--;	
} 
printf("一共可以听到%d次",sum); 
	
} 
