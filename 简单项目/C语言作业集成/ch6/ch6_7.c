#include <stdio.h>
void ch6_7() 
{
	//�����������ѭ��n i�����εĺ� sum SUM ����ĺ�term TERM
	 int i,n,sum=1,term;
	 double SUM=0,TERM=0;                    //��һ��ѭ�����
	 for(n=0;1.0/(double)sum>=1e-5;n++)
	 { 
		 for(sum=1,i=0;i<=n;i++)                   //Ƕ��ѭ���׳�
		 {
		  term=i+1;
		  sum*=term;
		 } 
	 	TERM=1.0/(double)sum;
	 	SUM+=TERM;
	}
	  SUM++;                                 //������ ��������ܺ�
	  printf("һ����%d�ͬʱe��ֵΪ��%lf",n,SUM); 
 } 
