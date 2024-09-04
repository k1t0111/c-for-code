#include <stdio.h>
void ch6_4()
{
	//定义变量本金和月份次数 
	int month,n=1;
	double fund; 
	do 
	{
		fund+=1000.0;
		//每一年月利息相加 
		for(month=1;month<=12;month++)
		{
			
		fund=fund/(1.0+0.01875);
			
		}
		//控制五年期间 
		n++;
		
	 }
	 while(n!=6); 
	 printf("五年前您需要的本金为%.2lf",fund);
	 
 } 
