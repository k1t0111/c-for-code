#include <stdio.h>
#include <math.h>
void ch6_20() 
{
int n,term=1,a,sum=1; 
printf("第一种求通项\n");
a=pow(2,64)-1; 
printf("%d\n",a);
printf("第二种求前后项关系\n");
//定义变量控制循环n 总和sum 项 term 
//循环相加
for(n=2;n<=40;n++)
{
term*=2;
sum+=term;	
}  
printf("最终数目为%d\n%lf",sum,(double)a/1.42e8);
} 
