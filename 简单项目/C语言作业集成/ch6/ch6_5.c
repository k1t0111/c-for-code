#include <stdio.h>
void ch6_5()
{
	//����������n-������ N-���  
	float n,fund=100;
	int N=0 ;
	printf("���������Ĳ�Ʒ������(���Ӱٷֺ�):");
	scanf("%f",&n); 
	//�����������ֵһ��
	do
	{
		fund*=1+n;
		N++;
	 } 
	 while(fund<=200); 
	printf("%d��֮�󷭱�",N);
 } 
