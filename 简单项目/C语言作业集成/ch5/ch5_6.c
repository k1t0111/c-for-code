//ch5_6
#include <stdio.h>
void ch5_6()
{
	int year; 
	printf("请输入您的年份 \n");
	scanf("%d",&year);
	if(year%4==0&&year%100!=0)
	printf("闰年\n");
	else
	printf("平年\n");
}

