//ch8.c
#include<stdio.h> 
void showCh8Menu();/*显示第8章的菜单*/
void pressCh8Ques(int quNum);/*运行第8章的作业*/
extern int return_front; /*声明return_front为外部变量*/
void pressCh8()
{
  int quNum;
  while(1)
  {
    showCh8Menu();
    printf("请输入题目前面的序号：");
    scanf("%d",&quNum);

    pressCh8Ques(quNum);
    if(return_front) break;
  }
}

void showCh8Menu()
{
  printf("第八章C语言作业（5个）\n");
  printf("0-返回上级菜单\n");
  printf("1-及格判定\n");
  printf("2-平均值判断\n");
  printf("3-最大值\n");
  printf("4-排序输出\n");
  printf("5-打分列表\n");
  printf("6-评委打分选手平均分排序\n");
  printf("7-矩阵对角线求和\n");
  
}

void pressCh8Ques(int quNum)
{
  return_front=0;
  switch(quNum)
  {
    case 0:return_front=1;return;
	case 1:	  
	ch8_2();
	viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch8\\ch8_2.c");
	break;
	case 2:	  
	ch8_3();
	viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch8\\ch8_3.c");
	break;
	case 3:	  
	ch8_4();
	viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch8\\ch8_4.c");
	break;
	case 4:	  
	ch8_5();
	viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch8\\ch8_5.c");
	break;
	case 5:	  
	ch8_6();
	viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch8\\ch8_6.c");
	break;
	case 6:	  
	ch8_7();
	viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch8\\ch8_7.c");
	break;
	case 7:	
	ch8_8();
	viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch8\\ch8_8.c");
	break;
  }
}
