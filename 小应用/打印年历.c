//��ӡ���� 
#include <stdio.h>
#include <stdlib.h>
//����printcal
void printcal(int year);
//����printmonth
void printmonth(int year,int month);
//����firstday
int firstdays(int year,int month); 
//��������monthdays
int monthdays(int year,int month); 
int main()
{
//1��������Ҫ�����
int year;  
printf("����������Ҫ�����:");
scanf("%d",&year);
//2�Զ��庯��printcal
printcal(year);
} 
//3��չprintcal
void printcal(int year)
{
int month; 
printf("*******%d������*******\n",year);
//4ѭ�����ʮ�����µ��·�����
for(month=1;month<=12;month++)
{
//5printmonth��ӡ��ÿ����	
printmonth(year,month);
} 
}
//6��չ����printmonth
void printmonth(int year,int month)
{
int weekend,j,d,mdays; 
printf("\n------- %d  �� -------\n",month);
printf(" �� һ �� �� �� �� ��\n");
//7��firstday�ҳ�ÿ���µĵ�һ���ǵڼ�λ 
weekend=firstdays(year,month);
//8���ñ���j��ѭ����ӡ����Ҫ�Ŀո���������Ϊһ�����
for(j=1;j<weekend;j++)
{
printf("   "); 
} 
//9�ҳ����걾����Ҫ����
mdays=monthdays(year,month); 
//10���ñ���dѭ����ӡ������
for(d=1;d<=mdays;d++)
{
printf("%3d",d);
if(weekend%7==0)
printf("\n");
weekend++;
}
}
//11��չ����monthdays 
int monthdays(int year,int month)
{
switch(month)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:return 31; 
case 4:
case 6:
case 9:
case 11:return 30;
case 2:
{
if(year%4==0&&year%100!=0)
return 29;
else
return 28;
}	
} 
}
//12����firstday
int firstdays(int year,int month)
{
int w;
 //13��ķ����ɭ��ʽ ����ÿ���µĵ�һ�������ڼ� 
if(month==1||month==2)
{
month+=12;
year--; 
}
w=(1+2*month+3*(month+1)/5+year+year/4-year/100+year/400+1)%7;
w++;
//14�൱�ڽ��ܼ�ת����һ�ֵڼ�λ 
return w; 
} 
 
