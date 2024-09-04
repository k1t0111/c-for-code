//ch7.c
#include<stdio.h>  
void showCh7Menu();/*显示第7章的菜单*/
void pressCh7Ques(int quNum);/*运行第7章的作业*/

extern int return_front; /*声明return_front为外部变量*/

void pressCh7()
{
  int quNum;
  while(1)
  {
    showCh7Menu();
    printf("请输入题目前面的序号：");
    scanf("%d",&quNum);
    pressCh7Ques(quNum);
    if(return_front) break;
  }
}

void showCh7Menu()
{
  printf("第7章C语言作业（13个）\n");
  printf("0-返回上级菜单\n");
  printf("1-第1题 输出两个数的最大值\n");
  printf("2-第2题 最小公倍数\n");
  printf("3-第3题 输出一串数字的阶乘\n");
  printf("4-第4题 输出一串数字的阶乘之和\n");
  printf("5-第5题 最小公约数-穷举法\n");
  printf("6-第6题 最小公约数-欧几里得算法\n");
  printf("7-第7题 最小公约数-递归方法\n");
  printf("8-第8题 素数探求-任务二\n");
  printf("9-第9题 素数探求-任务三\n");
  printf("10-第10题 素数探求-任务四\n");
  printf("11-第11题 素数探求-任务五\n");
  printf("12-第12题 小学乘法\n");
  printf("13-第13题 小学四则运算\n");
  printf("14-第14题 寻找素数因数并排序输出\n");
  printf("15-第15题 实时秒表\n");
}
void pressCh7Ques(int quNum)
{
  return_front=0;
  switch(quNum)
  {
    case 0:return_front=1;return;
	case 1:	  
	  ch7_2();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch7\\ch7_2.c");
	  break;
	case 2:
	  ch7_3();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch7\\ch7_3.c");
	  break;
	case 3:
	  ch7_4();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch7\\ch7_4.c");
	  break;
	case 4:	  
	  ch7_5();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch7\\ch7_5.c");
	  break;
	case 5:
	  ch7_6();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch7\\ch7_6.c");
	  break;
	case 6:
	  ch7_7();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch7\\ch7_7.c");
	  break;
	case 7:	  
	  ch7_8();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch7\\ch7_8.c");
	  break;
	case 8:
	  ch7_9();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch7\\ch7_9.c");
	  break;
	case 9:
	  ch7_10();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch7\\ch7_10.c");
	  break;
	case 10:	  
	  ch7_11();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch7\\ch7_11.c");
	  break;
	case 11:
	  ch7_12();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch7\\ch7_12.c");
	  break;
	case 12:	  
	  ch7_13();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch7\\ch7_13.c");
	  break;
	case 13:
	  ch7_14();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch7\\ch7_14.c");
	  break;	
	case 14:
	  ch7_15();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch7\\ch7_15.c");
	  break;		
	case 15:
	  ch7_16();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch7\\ch7_16.c");
	  break;		
  }
} 
