#include <stdio.h>
void ch6_17()
{
	//定义变量总收入sum 每天term 日子day
	int day;
	double  sum=0.01,term=0.01; 
	//循环计算
	for(day=2;day<=30;day++)
	{
	term*=2;
	sum+=term;	
		
	} 
    printf("富人付出%.3lf  陌生人付出%d",sum,100000*30); 
	
} 
