#include <stdio.h>
void ch6_6()
{
	//�������a�ж����� n��������
	int a=1,n;
	double sum,term; 
	for(n=1;1.0/(double)(2*n-1)>=1e-4;n++)
	{
		
		term= 1.0/(double)(2*n-1);
		sum+=term; 
	    a=-a; 
	 }
	 sum=sum*4;
	 printf("Բ���ʵ�ֵΪ:%lf\n����Ϊ%d",sum,n); 
 }
