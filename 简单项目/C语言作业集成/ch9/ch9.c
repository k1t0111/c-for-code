//ch9.c
#include<stdio.h> 

void showCh9Menu();/*显示第9章的菜单*/
void pressCh9Ques(int quNum);/*运行第9章的作业*/

extern int return_front; /*声明return_front为外部变量*/

void pressCh9()
{
  int quNum;
  while(1)
  {
    showCh9Menu();
    printf("请输入题目前面的序号：");
    scanf("%d",&quNum);

    pressCh9Ques(quNum);
    if(return_front) break;
  }
}

void showCh9Menu()
{
  printf("第9章C语言作业（1个）\n");
  printf("0-返回上级菜单\n");
  printf("1-第1题 判断年月日是一年的第几天\n");
}

void pressCh9Ques(int quNum)
{
  return_front=0;
  switch(quNum)
  {
    case 0:return_front=1;return;
	case 1:	  
	  ch9_2();
	  viewCode("D:\\代码程序\\2022大一c语言\\C语言作业集成\\ch9\\ch9_2.c");
	  break;
  }
}
