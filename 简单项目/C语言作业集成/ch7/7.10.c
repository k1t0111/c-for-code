#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	srand((int)time(NULL)); 
	//1.输入和,定义三位数 
	int a,b,c,sum; 
	printf("您好，现在我们玩一个魔术游戏\n"); 
	printf("请您在内心默想一个三位数n");
	printf("并且记住acb bac bca cab cba五个数并且输入他们的和\n");

	for(;;)
{
	//2.生成随机数
	a=rand()%10;
	b=rand()%10;
	c=rand()%10;
	//3判断并输出 
	if(a*100+2*a*10+2*a+2*b+2*b*100+2*10+c*100*2+2*10*c+c==1999)
{
	printf("您内心想的数字为%d",a*100+b*10+c);

}	
	 
}
} 



