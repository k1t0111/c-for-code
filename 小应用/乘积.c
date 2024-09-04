#include <stdio.h>
int add(int i);
main()
{
	int i;                                //i控制循环 
 	float term,term1=1.0,sum=1.0;         //单精度实数型保存每一项 
	for(i=1;term1>1e-5;i++)
	{
		term=add(i);
		term1=1.0/(float)term;
		sum+=term1; 
	} 
	printf("%4f\n共%d项",sum,i); 
}
int add(int i)
{ 
    if(i==0)                              //递归函数求和 
	return 1; 
	return i*add(i-1); 
} 
