#include <stdio.h>
void ch6_9()
{
	//���������ѭ��sum �� term ���� i����ͬʱ��ѭ��SUM����n���m
 
	int sum=1,term=1,i,SUM=0,n,m;
	printf("���������ڴ���һ��ֵn��");
	scanf("%d",&n); 
	//��ѭ���������� 
	for(m=0;SUM<=n;m++)
	{
	//��ѭ������ÿһ�� 
	for(i=0;i<=m;i++)
	{
		
	term=i+1;
	sum*=term;
		
	}
	
	SUM+=sum;
	
	}
	m--; 
	printf("����mֵΪ%d",m); 
} 
