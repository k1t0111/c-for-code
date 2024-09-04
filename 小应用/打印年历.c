//打印年历 
#include <stdio.h>
#include <stdlib.h>
//声明printcal
void printcal(int year);
//声明printmonth
void printmonth(int year,int month);
//声明firstday
int firstdays(int year,int month); 
//声明函数monthdays
int monthdays(int year,int month); 
int main()
{
//1输入所需要的年份
int year;  
printf("请输入您需要的年份:");
scanf("%d",&year);
//2自定义函数printcal
printcal(year);
} 
//3扩展printcal
void printcal(int year)
{
int month; 
printf("*******%d年年历*******\n",year);
//4循环输出十二个月的月份天数
for(month=1;month<=12;month++)
{
//5printmonth打印出每个月	
printmonth(year,month);
} 
}
//6扩展函数printmonth
void printmonth(int year,int month)
{
int weekend,j,d,mdays; 
printf("\n------- %d  月 -------\n",month);
printf(" 日 一 二 三 四 五 六\n");
//7用firstday找出每个月的第一天是第几位 
weekend=firstdays(year,month);
//8利用变量j来循环打印出需要的空格数，三格为一个大格
for(j=1;j<weekend;j++)
{
printf("   "); 
} 
//9找出本年本月需要几天
mdays=monthdays(year,month); 
//10利用变量d循环打印出天数
for(d=1;d<=mdays;d++)
{
printf("%3d",d);
if(weekend%7==0)
printf("\n");
weekend++;
}
}
//11扩展函数monthdays 
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
//12函数firstday
int firstdays(int year,int month)
{
int w;
 //13基姆拉尔森公式 计算每个月的第一天是星期几 
if(month==1||month==2)
{
month+=12;
year--; 
}
w=(1+2*month+3*(month+1)/5+year+year/4-year/100+year/400+1)%7;
w++;
//14相当于将周几转换成一种第几位 
return w; 
} 
 
