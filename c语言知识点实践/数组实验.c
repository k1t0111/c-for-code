#include <stdio.h>
#define N 10 
main()
{
/*	int i,a[N],temp;
	printf("��������ʮ������"); 
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
	printf("��������ʮ������");
	scanf("%d%d%d%d%d%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9,&a10);
*/
	int sum=0,term,i;
	printf("��������ʮ����");
	for(i=1;i<=10;i++)
	{
	scanf("%d",&term);
	sum+=term; 
	}	 
	printf("%d",sum); 
}
