#include <stdio.h>
void ch6_11()
{
	//����������� term �ܺ�sum
	int term,sum=0;
	//��������
	for(;term!=0;)	
	{
		printf("������һ��������0�����������");
		scanf("%d",&term);
	//�ж����� 
		if(term>0) 
		sum+=term; 
	 } 
	 printf("%d",sum); 
}
