//ch5_2
#include <stdio.h>
void ch5_2()
{
	float a;
	printf("请输入一个实数；\n");
	scanf("%f",&a);
	if(a<0)
	printf("%.2f\n",-a);
	else
	printf("%.2f\n",a);
	 
 } 
