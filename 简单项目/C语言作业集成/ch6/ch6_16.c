#include <stdio.h>
void ch6_16()
{
	//定义变量控制次数三个循环 
	int i=1,n=1,m=1;
	//保持开头格式整齐 
	printf("   1   2   3   4   5   6   7   8   9\n");
	printf("   -   -   -   -   -   -   -   -   -\n");
	//循环输出
	for(;i<=9;i++)
	{
	printf("%4d%4d%4d%4d%4d%4d%4d%4d%4d\n",i,i*2,i*3,i*4,i*5,i*6,i*7,i*8,i*9);
		
	} 
	
	printf("   1   2   3   4   5   6   7   8   9\n");
	printf("   -   -   -   -   -   -   -   -   -\n");
	for(;n<=9;n++) 
	{
	switch(n)
	{
	case 1:
	printf("%4d\n",n);break;
	case 2:
	printf("%4d%4d\n",n,n*2);break;
	case 3:
	printf("%4d%4d%4d\n",n,n*2,n*3);break;
	case 4:
	printf("%4d%4d%4d%4d\n",n,n*2,n*3,n*4);break;
	case 5:
	printf("%4d%4d%4d%4d%4d\n",n,n*2,n*3,n*4,n*5);break;
	case 6:
	printf("%4d%4d%4d%4d%4d%4d\n",n,n*2,n*3,n*4,n*5,n*6);break;
	case 7:
	printf("%4d%4d%4d%4d%4d%4d%4d\n",n,n*2,n*3,n*4,n*5,n*6,n*7);break;
	case 8:
	printf("%4d%4d%4d%4d%4d%4d%4d%4d\n",n,n*2,n*3,n*4,n*5,n*6,n*7,n*8);break;
	case 9:
	printf("%4d%4d%4d%4d%4d%4d%4d%4d%4d\n",n,n*2,n*3,n*4,n*5,n*6,n*7,n*8,n*9);break;
	 
    } 
	}
	printf("   1   2   3   4   5   6   7   8   9\n");
	printf("   -   -   -   -   -   -   -   -   -\n");
	for(;m<=9;m++) 
	{
	switch(m)
	{
	case 1:
	printf("%4d%4d%4d%4d%4d%4d%4d%4d%4d\n",m,m*2,m*3,m*4,m*5,m*6,m*7,m*8,m*9);break;
	case 2:
	printf("%4d%4d%4d%4d%4d%4d%4d%4d\n",m,m*2,m*3,m*4,m*5,m*6,m*7,m*8);break;
	case 3:
	printf("%4d%4d%4d%4d%4d%4d%4d\n",m,m*2,m*3,m*4,m*5,m*6,m*7);break;
	case 4:
	printf("%4d%4d%4d%4d%4d%4d\n",m,m*2,m*3,m*4,m*5,m*6);break;
	case 5:
	printf("%4d%4d%4d%4d%4d\n",m,m*2,m*3,m*4,m*5);break;
	case 6:
	printf("%4d%4d%4d%4d\n",m,m*2,m*3,m*4);break;
	case 7:
	printf("%4d%4d%4d\n",m,m*2,m*3);break;
	case 8:
	printf("%4d%4d\n",m,m*2);break;
	case 9:
    printf("%4d\n",m);break;
	 
    } 
	}

	
 } 
