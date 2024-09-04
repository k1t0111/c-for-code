//ch5_7
#include <stdio.h>
void ch5_7()
{
	int year,flag;
	printf("Enter year:\n");
	scanf("%d",&year);
	flag=year/4==0&&year/100!=0&&year/400==0?1:0;
	if(flag=1)
	printf("%d is a leap year\n",year);
	else
	printf("%d is not a leap year\n",year); 
	
 } 
