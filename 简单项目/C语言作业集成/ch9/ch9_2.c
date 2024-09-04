#include <stdio.h>
#include <stdlib.h> 
int DayofYear(int year,int month,int day);
void Monthday(int year,int yearday,int *pmonth,int *pday); 
int ch9_2() 
{
	char op;
	do
	{
	int year,month,day,yearday,pmonth=0,pday=0,num;//num序号 
	printf("这里是第九章第一题程序(请输入序号)\n");
	printf("1 year/month/day—>YearDay\n");
	printf("2 YearDay—>year/month/day\n");
	printf("3 exit\n");
	scanf("%d",&num); 
	switch(num)
	{
		case 1:
		printf("请输入年月日:");
		scanf("%d%d%d",&year,&month,&day); 
		printf("您输入的日期是本年的第%d天\n",DayofYear(year,month,day));
		break;
		case 2:
		printf("请输入您的年份和第几天:");
		scanf("%d%d",&year,&yearday);
		Monthday(year,yearday,&pmonth,&pday);
		printf("第%d月第%d天\n",pmonth,pday);
		break;
		case 3:
		return 0;
		default:printf("输入有误，请按照规则输入"); 
	}
	printf("您好,您是否需要继续继续(y或Y)退出(n或N)");
	getchar();
	scanf("%c",&op) ;
	}
	while(op=='Y'||'y');
	  	
} 
int DayofYear(int year,int month,int day)
{
	int i,sum=0,days[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	if(year%4==0&&year%100!=0)
	{
		for(i=0;i<month-1;i++)
		{
			sum+=days[i];
		}
		return sum+day; 
	} 
	else
	{
		for(i=0;i<month-1;i++)
		{
			sum+=days[i];
		}
		return sum+day-1;
	} 
}
void Monthday(int year,int yearday,int *pmonth,int *pday)
{
	int i,sum=0,days[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	if(year%4==0&&year%100!=0)
	{
		for(i=0;sum<yearday;i++)
		{
			sum+=days[i];
		}
	*pday=yearday-(sum-days[i-1]);
	} //判断完整的月份 
	else
	{
		days[1]=28; 
		for(i=0;sum<=yearday;i++)
		{
			sum+=days[i];
		}
	*pday=yearday-(sum-days[i-1]);
	*pmonth=i;
	}
	if(*pday==0) 
	{
		*pday=days[i-2]; 
		*pmonth=i-1;
	}
}
