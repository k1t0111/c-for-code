//ch5_13
#include <stdio.h>
#include <math.h>
void ch5_13()
{
	int weight;
	float height,t;
	printf("请输入你的身高(m)的和体重(kg)");
	scanf("%f%d",&height,&weight);
	t=weight/sqrt(height);
	if(t<18)
	printf("低体重");
	else 
	if(t>18&&t<25)
	printf("正常体重");
	else 
	if(t>25&&t<27)
	printf("超重体重");
	else 
	printf("肥胖"); 
 } 
