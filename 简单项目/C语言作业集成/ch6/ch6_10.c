#include <stdio.h>
void ch6_10()
{
	//����������� term �ܺ�sum
	int term,sum=0;
	//��������
	for(;term>0;)
	{
		printf("������һ�����������븺������0�����������");
		scanf("%d",&term);
		sum+=term; 
	 } 
	 printf("%d",sum); 
}
