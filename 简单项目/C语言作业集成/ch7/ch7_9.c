#include <stdio.h>
#include <math.h>
void IsPrime(int n); 
void ch7_9() 
{
	int n=11 ; 
	IsPrime(n);
}
void IsPrime(int n)
{
	int i;
	for(i=2;i<sqrt(n);i++)
	{
		if(n%i==0)
		{
			printf("n is not a prime");
			break; 
		}
	}
	if(i>sqrt(n))
	printf("n is a prime "); 
	
}

