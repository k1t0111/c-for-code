#include <stdio.h>
int add(int i);
main()
{
	int i;                                //i����ѭ�� 
 	float term,term1=1.0,sum=1.0;         //������ʵ���ͱ���ÿһ�� 
	for(i=1;term1>1e-5;i++)
	{
		term=add(i);
		term1=1.0/(float)term;
		sum+=term1; 
	} 
	printf("%4f\n��%d��",sum,i); 
}
int add(int i)
{ 
    if(i==0)                              //�ݹ麯����� 
	return 1; 
	return i*add(i-1); 
} 
