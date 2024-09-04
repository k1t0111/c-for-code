#include <stdio.h>
#include <math.h>
void ch6_18()
{
	srand(time(NULL));
	int f1,f2,n;
	for(;;)
	{
		f1=rand()%10;
		f2=rand()%10;
		n=rand()%100;
		if(f1!=f2&&f1*1000+f1*100+f2*10+f2==pow(n,2)) 
		{
			printf("%d",f1*1000+f1*100+f2*10+f2);
			break; 

		}
	}
 } 
