#include <stdio.h>
#include <math.h>
void ch6_8()
{
	//��ٷ���������nͬʱ����λ�õ�����Ϊf1 f2 f3
	int n,f1,f2,f3;
	//ѭ��������
	for(n=100;n<1000;n++)
	{
		f1=n/100;
		f2=(n-f1*100)/10;
		f3=n-f1*100-f2*10;
		//�ж��Ƿ�Ϊˮ�ɻ�����
		if(pow(f1,3)+pow(f2,3)+pow(f3,3)==n)
		{
			printf("%6d",n); 
		}
	 } 
}
