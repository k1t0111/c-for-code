#include <stdio.h>
#include <stdlib.h>
char *fighting();//消除疲劳鼓励的话 
char *fail();
void ch7_14() 
{	
	srand((int)time(NULL));
	printf("欢迎来到辅助教学程序！！！\n小试牛刀！！！\n"); 
	//(1)打印四则运算
	int num1,num2,num3,sign,result,cnt,grade,i;/*(1.1)num数字表示一个表达式  sign表示不同符号的代表 
									i控制循环 result输入的答案  cnt 记录正确 grade 成绩*/
	float rate ;//(1.2)正确率 
	char op;//(1.3)yes or no 
	do
	{
	cnt=0; 
	for(i=1;i<=10;i++)
	{
		num1=rand()%10; 
		num2=rand()%10;
		sign=rand()%5;
		switch(sign)//(1.4)分支语句选择表达算式 
		{
			case 0:
			num3=num1+num2;
			printf("第%d题： %d + %d = ?",i,num1,num2);
			break; 
			case 1:
			num3=num1-num2;
			printf("第%d题： %d - %d = ?",i,num1,num2);
			break;
			case 2:
			num3=num1*num2;
			printf("第%d题： %d * %d = ?",i,num1,num2);
			break;
			case 3:
			num3=num1/num2;
			printf("第%d题： %d / %d = ?",i,num1,num2);
			break;
			case 4:
			num3=num1%num2;
			printf("第%d题： %d %% %d = ?",i,num1,num2);
			break;
		}
		//(2)判断对错
		//(3)计算对的题目
		scanf("%d",&result); 
		if(result==num3)//(2.1)判断成绩 
		{
			printf("%s\n",fighting()); 
			cnt++;
		}
		else
		printf("%s\n",fail());
	}	
	rate=(float)cnt/10.0;//(2.2)成绩和正确率 
	grade=cnt*10;
	printf("您的成绩为:%d  您的正确率为：%.1f%%\n",grade,rate*100); 
	if(rate<0.75)        //(2.3)不同情况的重新练习 
	printf("很遗憾！由于正确率太低需要重新闯关！\n"); 	
	else
	{
		printf("完成的非常不错已经成功通关！想要再来一次吗？是(Y或y)否(N或n)");
		scanf(" %c",&op);
	if(op=='n'||'N')
	exit(0); 
	}
	}
	while(rate<0.75||op=='y'||'Y');  
}
//函数功能：表达出鼓励的话 
char *fighting()
{
	//(4.1)定义字符数组保存鼓励语句 
	static char a[4][25]={{"Very good！"},{"Excellent！"},{"Nice work！"},{"keep up the goodwork！"}};
	//(4.2)i用于保存随机数选择
	int i; 
	i=rand()%4;
	switch(i)//(4.3)分支语句用于选择 
	{
		case 0:return a[0];break;
		case 1:return a[1];break;
		case 2:return a[2];break;
		case 3:return a[3];break;
	}	
}
//函数功能：表达失败时候的话 
char *fail()
{
	srand((int)time(NULL)); 
	//(4.4)定义字符数组保存鼓励语句 
	static char a[4][25]={{"Try again!"},{"Try one more!"},{"no give up!"},{"keep trying!"}};
	//(4.5)i用于保存随机数选择
	int i; 
	i=rand()%4;
	switch(i)//(4.6)分支语句用于选择 
	{
		case 0:return a[0];break;
		case 1:return a[1];break;
		case 2:return a[2];break;
		case 3:return a[3];break;
	}	
}    
