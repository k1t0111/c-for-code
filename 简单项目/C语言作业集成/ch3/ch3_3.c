//ch3_3.c
#include<stdio.h>
#include<math.h>
void ch3_3()
{
  float rate=0.0225,capital,deposit;
  int n;
  printf("������������ʹ����:");
  scanf("%f %d",&capital,&n);
    
  deposit=capital*pow(1+rate,n);
  printf("%d������ı�����Ϊ:%.2fԪ��\n",n,deposit);
}
