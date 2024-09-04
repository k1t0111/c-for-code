#include <stdio.h>
#include <math.h> 
void ch6_2()
{    //定义范围n 
	int i,n,cnt=0,fps1,fps2;
	printf("请输入您的范围n\n");
	scanf("%d",&n);
	//循环平方和立方并打印 
	for(i=2;i<n;i++)
	{
		fps2=pow(i,3);
		fps1=pow(i,2); 
		printf("(%4d %4d  )",fps1,fps2);
		//实现六个一行 
		cnt+=2;
		if(cnt%10==0)
		printf("\n"); 
	}
 } 
