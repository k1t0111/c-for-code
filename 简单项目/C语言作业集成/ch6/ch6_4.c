#include <stdio.h>
void ch6_4()
{
	//�������������·ݴ��� 
	int month,n=1;
	double fund; 
	do 
	{
		fund+=1000.0;
		//ÿһ������Ϣ��� 
		for(month=1;month<=12;month++)
		{
			
		fund=fund/(1.0+0.01875);
			
		}
		//���������ڼ� 
		n++;
		
	 }
	 while(n!=6); 
	 printf("����ǰ����Ҫ�ı���Ϊ%.2lf",fund);
	 
 } 
