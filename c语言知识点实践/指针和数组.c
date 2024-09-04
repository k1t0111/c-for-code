#include <stdio.h> 
void exchange(int *p,int a[]);
main()
{
	int a[5]={1,2,3,4,5},b[2][3]={{23,33,43},{32,35,65}}; 
	int i,j,*p;
	exchange(&a[0],&a[4]); 
	p=a;
	for(i=0;i<5;i++)
	{
		printf("%d\n",*(p+i)); 
	}
}
	//定义交换函数
void exchange(int *p,int a[])
{
	int temp;
	temp=*p;
	*p=a[0];
	a[0]=temp; 
} 

