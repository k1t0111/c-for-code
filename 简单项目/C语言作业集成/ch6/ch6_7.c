#include <stdio.h>
void ch6_7() 
{
	//定义变量两次循环n i和两次的和 sum SUM 各项的和term TERM
	 int i,n,sum=1,term;
	 double SUM=0,TERM=0;                    //第一次循环求和
	 for(n=0;1.0/(double)sum>=1e-5;n++)
	 { 
		 for(sum=1,i=0;i<=n;i++)                   //嵌合循环阶乘
		 {
		  term=i+1;
		  sum*=term;
		 } 
	 	TERM=1.0/(double)sum;
	 	SUM+=TERM;
	}
	  SUM++;                                 //求项数 并且输出总和
	  printf("一共有%d项，同时e的值为：%lf",n,SUM); 
 } 
