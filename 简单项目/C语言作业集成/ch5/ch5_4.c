//ch5_4
#include <stdio.h>
#include <math.h>
void ch5_4()
{
	int a,b,c,p,s; 
	printf("请输入三角形三条边的长度；\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a) 
	{
		p=(1.0/2.0)*(a+b+c);
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("三角形的面积为；%d\n",s);

		 }
	else
	printf("三角形不存在\n");     

 } 
