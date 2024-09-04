#include <stdio.h>
main()
{
	int x,a[14]={1,2,3,4,5,6,7,8,9,10,11,12,13,14},low=0,high=13,mid;
	printf("请输入您的查找数据的序号");
	scanf("%d",&x);
	while(high!=low)
	{
		mid=low+(high-low)/2;	 
		if(mid>x)
		{
			high=mid-1; 
		}
		if(mid<x) 
		{
			low=mid+1; 
		} 
		if(mid=x) 
		{
			printf("%d",a[mid]);
			break; 
		}
	} 
} 
