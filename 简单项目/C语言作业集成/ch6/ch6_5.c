#include <stdio.h>
void ch6_5()
{
	//输入增长率n-增长率 N-年份  
	float n,fund=100;
	int N=0 ;
	printf("请输入您的产品增长率(不加百分号):");
	scanf("%f",&n); 
	//计算多少年增值一倍
	do
	{
		fund*=1+n;
		N++;
	 } 
	 while(fund<=200); 
	printf("%d年之后翻倍",N);
 } 
