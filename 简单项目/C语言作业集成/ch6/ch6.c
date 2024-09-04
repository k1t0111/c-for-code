//ch6.c
#include<stdio.h> 

void showCh6Menu();/*显示第6章的菜单*/
void pressCh6Ques(int quNum);/*运行第6章的作业*/

extern int return_front; /*声明return_front为外部变量*/

void pressCh6()
{
  int quNum;
  while(1)
  {
    showCh6Menu();
    printf("请输入题目前面的序号：");
    scanf("%d",&quNum);

    pressCh6Ques(quNum);
    if(return_front) break;
  }
}

void showCh6Menu()
{
  printf("第6章C语言作业（19个）\n");
  printf("0-返回上级菜单\n");
  printf("1-第1题 输出定义范围内所有数字平方立方和\n");
  printf("2-第2题 华氏转换摄氏温度\n");
  printf("3-第3题 银行存钱第一年本金\n");
  printf("4-第4题 工业产值翻倍时间\n");
  printf("5-第5题 输出圆周率近似值\n");
  printf("6-第6题 输出e近似值\n");
  printf("7-第7题 水仙花数字\n");
  printf("8-第8题 阶乘求m整数解\n");
  printf("9-第9题 求整数的和\n");
  printf("10-第10题 求一串除了负数以外的和\n");
  printf("11-第11题 吃饭穷举法计算人数\n");
  printf("12-第12题 鸡兔同笼\n");
  printf("13-第13题 计算公鸡母鸡小鸡数目\n");
  printf("14-第14题 兑换人民币\n");
  printf("15-第15题 输出九九乘法表\n");
  printf("16-第16题 百万富翁\n");
  printf("17-第17题 交通肇事犯\n");
  printf("18-第18题 礼炮声计算\n");
  printf("19-第19题 国际象棋骗术\n");
}

void pressCh6Ques(int quNum)
{
  return_front=0;
  switch(quNum)
  {
    case 0:return_front=1;return;
	case 1:	  
	  ch6_2();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch6\\ch6_2.c");
	  break;
	case 2:
	  ch6_3();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch6\\ch6_3.c");
	  break;
	case 3:
	  ch6_4();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch6\\ch6_4.c");
	  break;
	case 4:	  
	  ch6_5();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch6\\ch6_5.c");
	  break;
	case 5:
	  ch6_6();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch6\\ch6_6.c");
	  break;
	case 6:
	  ch6_7();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch6\\ch6_7.c");
	  break;
	case 7:	  
	  ch6_8();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch6\\ch6_8.c");
	  break;
	case 8:
	  ch6_9();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch6\\ch6_9.c");
	  break;
	case 9:
	  ch6_10();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch6\\ch6_10.c");
	  break;
	case 10:	  
	  ch6_11();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch6\\ch6_11.c");
	  break;
	case 11:
	  ch6_12();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch6\\ch6_12.c");
	  break;
	case 12:
	  ch6_13();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch6\\ch6_13.c");
	  break;
	case 13:	  
	  ch6_14();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch6\\ch6_14.c");
	  break;
	case 14:
	  ch6_15();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch6\\ch6_15.c");
	  break;
	case 15:
	  ch6_16();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch6\\ch6_16.c");
	  break;
	case 16:	  
	  ch6_17();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch6\\ch6_17.c");
	  break;
	case 17:
	  ch6_18();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch6\\ch6_18.c");
	  break;
	case 18:
	  ch6_19();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch6\\ch6_19.c");
	  break;
	case 19:
	  ch6_20();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch6\\ch6_20.c");
	  break;  	
  }
}
