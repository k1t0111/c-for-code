#include <stdio.h>
#include <stdlib.h> 
int DayofYear(int year,int month,int day);
void Monthday(int year,int yearday,int *pmonth,int *pday); 
int ch9_2() 
{
	char op;
	do
	{
	int year,month,day,yearday,pmonth=0,pday=0,num;//num��� 
	printf("�����ǵھ��µ�һ�����(���������)\n");
	printf("1 year/month/day��>YearDay\n");
	printf("2 YearDay��>year/month/day\n");
	printf("3 exit\n");
	scanf("%d",&num); 
	switch(num)
	{
		case 1:
		printf("������������:");
		scanf("%d%d%d",&year,&month,&day); 
		printf("������������Ǳ���ĵ�%d��\n",DayofYear(year,month,day));
		break;
		case 2:
		printf("������������ݺ͵ڼ���:");
		scanf("%d%d",&year,&yearday);
		Monthday(year,yearday,&pmonth,&pday);
		printf("��%d�µ�%d��\n",pmonth,pday);
		break;
		case 3:
		return 0;
		default:printf("���������밴�չ�������"); 
	}
	printf("����,���Ƿ���Ҫ��������(y��Y)�˳�(n��N)");
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
	} //�ж��������·� 
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
