//ch3_4.c
#include<stdio.h> 
#include<math.h>

void ch3_4()
{
  int a,b,c,delt;
  float x1,x2;

  printf("������a��b��c��ֵ��");
  scanf("%d%d%d",&a,&b,&c);

  if(a==0)
	  if(b==0) printf("a��b��ֵ����ͬʱΪ0��");
	  else 
	  {
		  x1=-c/b;
	      printf("x1=%.2f\n",x1);
	  }
  else
  {
     delt=b*b-4*a*c;
	 if(delt>0)
	 {
	   x1=(-b+sqrt(delt))/(2*a);
	   x2=(-b-sqrt(delt))/(2*a);
       printf("x1=%.2f,x2=%.2f\n",x1,x2);
	 }
	 else if(delt==0) 
	 {
	   x1=-b/(2*a);
	   printf("x1=x2=%.2f\n",x1);
	 }
     else printf("��ʵ���⣡\n");
  }  
}
