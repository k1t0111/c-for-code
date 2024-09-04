#include <stdio.h>
#include <math.h>
void ch6_8()
{
	//穷举法定义数字n同时各个位置的数字为f1 f2 f3
	int n,f1,f2,f3;
	//循环找数字
	for(n=100;n<1000;n++)
	{
		f1=n/100;
		f2=(n-f1*100)/10;
		f3=n-f1*100-f2*10;
		//判断是否为水仙花数字
		if(pow(f1,3)+pow(f2,3)+pow(f3,3)==n)
		{
			printf("%6d",n); 
		}
	 } 
}
