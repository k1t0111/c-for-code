//ch3.c
#include<stdio.h> 

void showCh3Menu();				/*显示第3章的菜单*/
void pressCh3Ques(int quNum);	/*运行第3章的作业*/

extern int return_front; 		/*声明return_front为外部变量*/

void pressCh3()
{
  int quNum;
  while(1)
  {
    showCh3Menu();
    printf("请输入题目前面的序号：");
    scanf("%d",&quNum);

    pressCh3Ques(quNum);
    if(return_front) break;
  }
}

void showCh3Menu()
{
  printf("第3章C语言作业（3个）\n");
  printf("0-返回上级菜单\n");
  printf("1-第2题 输出逆序数\n");
  printf("2-第3题 求本利和\n");
  printf("3-第4题 求一元二次方程的根\n");
}

void pressCh3Ques(int quNum)
{
  return_front=0;
  switch(quNum)
  {
    case 0:return_front=1;return;
	case 1:	  
	  ch3_2();
	  viewCode("D:\\soft\\c语言\\C语言作业集成\\ch3\\ch3_2.c");
	  break;
	case 2:
	  ch3_3();
	  viewCode("D:\\soft\\c语言\\C语言作业集成\\ch3\\ch3_3.c");
	  break;
	case 3:
	  ch3_4();
	  viewCode("D:\\soft\\c语言\\C语言作业集成\\ch3\\ch3_4.c");
	  break;	
  }
}
