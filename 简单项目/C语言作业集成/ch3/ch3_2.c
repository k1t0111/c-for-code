//ch3_2.c
#include<stdio.h>
void ch3_2()
{
  int n,gw,sw,bw;
  printf("������һ����λ����:");
  scanf("%d",&n);
  if (n<0)n=-n;
  
  gw=n%10;
  sw=(n/10)%10;
  bw=n/100;
  n=gw*100+sw*10+bw;

  printf("��������������:%d\n",n);
}
