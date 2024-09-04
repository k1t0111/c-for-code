//ch5.c
#include<stdio.h> 

void showCh5Menu();/*显示第5章的菜单*/
void pressCh5Ques(int quNum);/*运行第5章的作业*/

extern int return_front; /*声明return_front为外部变量*/

void pressCh5()
{
  int quNum;
  while(1)
  {
    showCh5Menu();
    printf("请输入题目前面的序号：");
    scanf("%d",&quNum);

    pressCh5Ques(quNum);
    if(return_front) break;
  }
}

void showCh5Menu()
{
  printf("第5章C语言作业（12个）\n");
  printf("0-返回上级菜单\n");
  printf("1-第1题 输出绝对值\n");
  printf("2-第2题 判断奇偶性\n");
  printf("3-第3题 构成三角形\n");
  printf("4-第4题 银行本金利息总计\n");
  printf("5-第5题 判断闰年平年\n");
  printf("6-第6题 逗号表达式判断闰年平年\n");
  printf("7-第7题 大小写英文字母转换\n");
  printf("8-第8题 判断字符\n");
  printf("9-第9题 成绩转换为五分制\n");
  printf("10-第10题 输出月份天数\n");
  printf("11-第11题 身高预测\n");
  printf("12-第12题 体型判断\n"); 
}

void pressCh5Ques(int quNum)
{
  return_front=0;
  switch(quNum)
  {
    case 0:return_front=1;return;
	case 1:	  
	  ch5_2();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch5\\ch5_2.c");
	  break;
	case 2:
	  ch5_3();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch5\\ch5_3.c");
	  break;
	case 3:
	  ch5_4();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch5\\ch5_4.c");
	  break;
	case 4:	  
	  ch5_5();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch5\\ch5_5.c");
	  break;
	case 5:
	  ch5_6();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch5\\ch5_6.c");
	  break;
	case 6:
	  ch5_7();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch5\\ch5_7.c");
	  break;
	case 7:	  
	  ch5_8();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch5\\ch5_8.c");
	  break;
	case 8:
	  ch5_9();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch5\\ch5_9.c");
	  break;
	case 9:
	  ch5_10();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch5\\ch5_10.c");
	  break;
	case 10:	  
	  ch5_11();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch5\\ch5_11.c");
	  break;
	case 11:
	  ch5_12();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch5\\ch5_12.c");
	  break;
	case 12:
	  ch5_13();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch5\\ch5_13.c");
	  break;
  }
}
