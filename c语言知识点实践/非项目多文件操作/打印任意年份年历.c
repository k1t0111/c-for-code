//打印年历 
#include <stdio.h>
#include "printcal.c" 
#include "printmonth.c" 
#include "firstdays.c" 
#include "monthdays.c" 
#include "isleapyear.c" 
int main()
{
//1输入所需要的年份
int year; 
printf("请输入您需要的年份:");
scanf("%d",&year);
//2自定义函数printcal
printcal(year);
return 0; 
} 



