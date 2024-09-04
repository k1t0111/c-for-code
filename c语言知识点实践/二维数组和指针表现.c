#include <stdio.h>
main()
{
	int  a[3][3]={1,2,3,4,5,6},i,j,(*pp)[3];
	pp=a; 
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++) 
		printf("%d\n",*(*(pp+i)+j));
	}
		
} 
