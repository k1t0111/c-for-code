#include <stdio.h>
#define N 10 
main()
{
/*	int i,a[N],temp;
	printf("请您输入十个整数"); 
	for(i=0;i<N;i++)
	{
	scanf("%d",&a[i]); 
	}
	for(i=0;i<N/2;i++)
	{
	temp=a[i];
	a[i]=a[N-1-i];
	a[N-1-i]=temp; 
	}
	for(i=0;i<N;i++)
	{
	printf("%d",a[i]); 
	}
*/
/*	int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,i;
	printf("请您输入十个整数");
	scanf("%d%d%d%d%d%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9,&a10);
*/
	int sum=0,term,i;
	printf("请您输入十个数");
	for(i=1;i<=10;i++)
	{
	scanf("%d",&term);
	sum+=term; 
	}	 
	printf("%d",sum); 
}
