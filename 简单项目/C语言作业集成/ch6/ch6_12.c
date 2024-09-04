#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void ch6_12()
{
	//定义变量 男女小孩
	int man,woman,children;
	srand(time(NULL)); 
    for(;;)	
	{
	//随机数字 
	man=rand()%30;
	woman=rand()%30;
	children=rand()%30;
	if(man*3+woman*2+children==50&&man+woman+children==30)
	break; 
	}
	//判断 
 
	printf("男生人数%6d 女士人数 %6d 小孩人数 %6d",man,woman,children) ;
}
