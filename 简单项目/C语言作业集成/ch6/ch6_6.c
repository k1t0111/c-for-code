#include <stdio.h>
void ch6_6()
{
	//定义变量a判断正负 n计算项数
	int a=1,n;
	double sum,term; 
	for(n=1;1.0/(double)(2*n-1)>=1e-4;n++)
	{
		
		term= 1.0/(double)(2*n-1);
		sum+=term; 
	    a=-a; 
	 }
	 sum=sum*4;
	 printf("圆周率的值为:%lf\n项数为%d",sum,n); 
 }
