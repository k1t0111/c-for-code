#include <stdio.h>
#include <stdlib.h>
void ch8_8() 
{
/*1创造矩阵*/
	int n,**p,i,j,sum;                         // n矩阵参数 p 二级指针指向二维数组 i,j循环 sum求和 
	printf("您好请输入您需要的矩阵参数：");	   //1.1输入参数 
	scanf("%d",&n);                                 
	p=(int **)calloc(n,sizeof(int *));		   //1.2动态分配数据 
	if(p==NULL)								   //1.3判断空间是否给出 
	{
		printf("not have enough space");
		exit(0); 
	} 
	for(i=0;i<n;i++)
	{
		p[i]=(int *)calloc(n,sizeof(int));
		if(p==NULL)							   //1.3判断空间是否给出 
		{
			printf("not have enough space");
			exit(0); 
		}
	}
	printf("请填充矩阵\n"); 
	for(i=0;i<n;i++)						   //1.4格式化输入矩阵 
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&p[i][j]);
		}
	}
	for(i=0;i<n;i++)						   //1.5格式化输出矩阵 
	{
		for(j=0;j<n;j++)
		{
			printf("%d",p[i][j]);
		}
		printf("\n"); 
	} 
/*2对角线求和*/
	for(i=0,j=0,sum=0;i<n;i++,j++)			   //2.1左对角线求和 
	{
		sum+=p[i][j]; 
	} 
	for(i=0,j=n-1;i<n;i++,j--)			       //2.2右对角线求和 
	{
		sum+=p[i][j]; 
	}
/*3参数奇数判断*/
	if(n%2!=0)
	{
		sum-=p[n/2][n/2]; 					   //3.1删掉奇数中间重复数字 
	}
/*4释放动态空间*/
	for(i=0;i<n;i++)
	free(p[i]);
	free(p); 
/*5输出数据*/
	printf("您好您的矩阵对角线求和：%d",sum);
}

 
