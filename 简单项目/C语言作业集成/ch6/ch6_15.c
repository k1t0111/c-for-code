#include  <stdio.h>
void ch6_15()
{
	//定义金额数目 用n代表方案数目
	int ten,five,one,n;
	srand(time(NULL));
	//取随机数穷举
	for(n=0;n<50;)
	{
		ten=rand()%50;
		five=rand()%50;
	    one=rand()%50;
	//判断是否相加为100 
	if(ten*10+five*5+one==100&&ten+five+one<=50)
	{
		printf("十元数量%4d 五元数量%4d 一元数量%4d 一共有%4d\n",ten,five,one,ten+five+one);
		n++;
			
    } 
    } 
    //输出方案数
	printf("一共有%d种方案",n); 
} 
