#include <stdio.h>
void ch6_17()
{
	//�������������sum ÿ��term ����day
	int day;
	double  sum=0.01,term=0.01; 
	//ѭ������
	for(day=2;day<=30;day++)
	{
	term*=2;
	sum+=term;	
		
	} 
    printf("���˸���%.3lf  İ���˸���%d",sum,100000*30); 
	
} 
