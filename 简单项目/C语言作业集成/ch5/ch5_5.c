//ch5_5
#include <stdio.h>
#include <math.h>
void ch5_5()
{
	int capital,n;
	double deposit; 
	printf("请输入您要保存的本金和存款期；\n");
	scanf("%d\n%d\n",&capital,&n);
	switch(n)
	{
		case 1:
	deposit=capital*pow(1.0225,n);
	printf("您的本利为；%lf\n",deposit);
	break; 
	    case 2:
	deposit=capital*pow(1.0243,n);
	printf("您的本利为；%lf\n",deposit);
	break;
	    case 3:
	deposit=capital*pow(1.0270,n);
	printf("您的本利为；%lf\n",deposit);
	break; 
	    case 5:
	deposit=capital*pow(1.0288,n);
	printf("您的本利为；%lf\n",deposit);
	break;
	    case 8:
	deposit=capital*pow(1.0300,n);
	printf("您的本利为；%lf\n",deposit);
	break;
	default : printf("您的输入错误");
	} 
 } 
