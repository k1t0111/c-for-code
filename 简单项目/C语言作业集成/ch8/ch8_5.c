//1输入十个整数
//2最大值
//3最小值
//4交换
//5输出
#include <stdio.h>
int FindMax(int A[]);
int FindMin(int A[],int max);
void swap(int *p,int *q);
void print(int A[]); 
void ch8_5()
{
	int A[10],i,max,min;//A 储存整数 i 控制循环 
	//1输入十个整数
	printf("欢迎来到小程序!!!\n");
	printf("请输入十个整数\n");
	for(i=0;i<10;i++)
	{
		printf("第%d个:",i+1); 
		scanf("%d",&A[i]); 
	}
	//2最大值
	max=FindMax(A);
	//3最小值 
	min=FindMin(A,max);
	//4交换
	swap(&A[max],&A[min]);
	//5输出
	printf("最大值为%d\n最小值为%d\n",A[max],A[min]);
	printf("您的数据交换后的结果为：\n"); 
	print(A); 
	 
} 
int FindMax(int A[])
{
	int i,num1,num2=0;//num1下标  num2打擂法变量
	for(i=0;i<10;i++)
	{
		if(A[i]>num2)
		{
			num2=A[i];//转换新的比较变量 
			num1=i;
		}
	} 
	return num1; 
}
int FindMin(int A[],int max)
{
	int i,num1,num2=A[max];//num1下标  num2打擂法变量
	for(i=0;i<10;i++)
	{
		if(A[i]<num2) 
		{
			num2=A[i];//转换新的比较变量 
			num1=i;
		} 
	}
	return num1;  
}
void swap(int *p,int *q)
{
	int lemp;
	lemp=*p;
	*p=*q;
	*q=lemp; 
}
void print(int A[])
{
	int i;
	for(i=0;i<10;i++)
	printf("%4d",A[i]); 
}

