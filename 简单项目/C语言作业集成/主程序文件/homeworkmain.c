#include <stdio.h>
#include <stdlib.h>

void showMainMenu();/*显示主菜单*/
void showChapMenu(int chNum);/*显示章菜单，并运行章中程序*/
int return_front=0; /*return_front=1时返回上级菜单*/ 

void main() 
{
  int chNum;
  while(1)
  {
    showMainMenu();
    printf("请输入章节前面的序号：");
    scanf("%d",&chNum);
    showChapMenu(chNum);
  }	
}

void showMainMenu()
{
  printf("周俊帅的C语言程序\n");
  printf("0-退出程序\n");
  printf("1-第3章作业（3个）\n");
  printf("2-第4章作业（1个）\n");
  printf("3-第5章作业（12个）\n");
  printf("4-第6章作业（19个）\n");
  printf("5-第7章作业（15个）\n");
  printf("6-第8章作业（7个）\n");
  printf("7-第9章作业（1个）\n");
}

void showChapMenu(int chNum)
{
  switch(chNum)
  {
    case 0:printf("欢迎下次再来！\n");exit(0);//退出程序 
	case 1:pressCh3();break;//第3章处理程序
	case 2:pressCh4();break;//第4章处理程序
	case 3:pressCh5();break;//第5章处理程序
	case 4:pressCh6();break;//第6章处理程序
	case 5:pressCh7();break;//第7章处理程序
	case 6:pressCh8();break;//第8章处理程序
	case 7:pressCh9();break;//第9章处理程序
	default:printf("你输入的序号还没有对应的处理程序。\n");break;
  }
}

/*查看源代码的函数*/ 
void viewCode(char* fileName)
{
  FILE *fp;
  char ch;
  printf("要查看源代码吗？需要请输入Y或y，否则，输入任意其他字符：");
  scanf(" %c",&ch);
  if(ch!='Y'&&ch!='y')return;
  if((fp=fopen(fileName,"r"))==NULL)
  {
    printf("打开文件失败！\n");
	return;
  }

  while((ch=fgetc(fp))!=EOF)
  {
    putchar(ch);
  }
  fclose(fp);
}

