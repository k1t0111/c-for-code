#include <stdio.h>
void ch6_19()
{
//�������ʱ��time���ܺ�sum
int time,sum;
//ѭ����ٷ�
for(time=30,sum=61;time<=140;time++)
{
//�жϼ�ȥ������
if((time%5==0&&time%6==0)||(time%6==0&&time%7==0)||(time%5==0&&time%7==0))
sum--;	
} 
printf("һ����������%d��",sum); 
	
} 
