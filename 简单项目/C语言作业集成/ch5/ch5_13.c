//ch5_13
#include <stdio.h>
#include <math.h>
void ch5_13()
{
	int weight;
	float height,t;
	printf("������������(m)�ĺ�����(kg)");
	scanf("%f%d",&height,&weight);
	t=weight/sqrt(height);
	if(t<18)
	printf("������");
	else 
	if(t>18&&t<25)
	printf("��������");
	else 
	if(t>25&&t<27)
	printf("��������");
	else 
	printf("����"); 
 } 
