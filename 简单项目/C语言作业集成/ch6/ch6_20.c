#include <stdio.h>
#include <math.h>
void ch6_20() 
{
int n,term=1,a,sum=1; 
printf("��һ����ͨ��\n");
a=pow(2,64)-1; 
printf("%d\n",a);
printf("�ڶ�����ǰ�����ϵ\n");
//�����������ѭ��n �ܺ�sum �� term 
//ѭ�����
for(n=2;n<=40;n++)
{
term*=2;
sum+=term;	
}  
printf("������ĿΪ%d\n%lf",sum,(double)a/1.42e8);
} 
