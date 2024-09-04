#include <stdio.h>
void ch6_3()
{
	//定义变量
	int F,cnt=0;
	float C; 
	printf("对应表如下：\n"); 
	//循环对应摄氏温度 F华氏温度 C 摄氏温度 
	for(F=0;F<=300;F=F+10)
	{
		C=(5.0/9.0)*(F-32);
		printf("%2d==%2f  ",F,C);
		//六个一行
		 
		cnt+=1;
		if(cnt%6==0)
		printf("\n"); 
		 
	 } 
 } 
