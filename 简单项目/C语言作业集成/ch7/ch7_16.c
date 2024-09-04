#include <stdio.h>
int hour=11,minute=12,second=0;//全局变量 时分秒 
void update();         //函数声明 
void delay();
void ch7_16() 
{
	int i ;            //循环参数
	for(i=0;i<3;i++)
	{
		update();      //更新秒表数据 
		printf("%02d:%02d:%02d\n",hour,minute,second);     //呈现秒表数据 
		delay();       //延迟一秒 
	} 
} 
/*函数功能：更新钟表数据*/
void update()
{
	delay();
	second+=3;
	if(second==60)     //秒满足60 
	{
		second=0; 
		minute++; 
	}
	if(minute==60)	  //分满足60
	{
		minute=0; 
		hour++; 
	}
	if(hour==24)      //时满足24
	hour=0; 
}
void delay()
{
	int i;
	for(i=0;i<1000000000;i++)
	{
	}
}
