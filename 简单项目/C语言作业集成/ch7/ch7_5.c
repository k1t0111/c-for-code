#include <stdio.h>
long fact(int i); 
void ch7_5()
{   
    //1.用户输入一个数字 
	int n,i;
	//2.利用长整型数字 
	long term,sum=0; 
	printf("请输出一个整数n:");
	scanf("%d",&n);
	//3.循环结构 求各个项的阶乘i控制 
	for(i=1;i<=n;i++)
{
	term=fact(i); 
	sum+=term; 
} 
	printf("您的阶乘结果为%ld",sum);	 
	 
}
long fact(int i)
{
	//4.利用判断语句控制0
	if(
	i==0)
	return 1;
	else
	if(i>=1)
	return i*fact(i-1); 
} 
