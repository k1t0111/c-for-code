//��ӡ���� 
#include <stdio.h>
#include "printcal.c" 
#include "printmonth.c" 
#include "firstdays.c" 
#include "monthdays.c" 
#include "isleapyear.c" 
int main()
{
//1��������Ҫ�����
int year; 
printf("����������Ҫ�����:");
scanf("%d",&year);
//2�Զ��庯��printcal
printcal(year);
return 0; 
} 



