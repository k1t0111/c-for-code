//ch9.c
#include<stdio.h> 

void showCh9Menu();/*��ʾ��9�µĲ˵�*/
void pressCh9Ques(int quNum);/*���е�9�µ���ҵ*/

extern int return_front; /*����return_frontΪ�ⲿ����*/

void pressCh9()
{
  int quNum;
  while(1)
  {
    showCh9Menu();
    printf("��������Ŀǰ�����ţ�");
    scanf("%d",&quNum);

    pressCh9Ques(quNum);
    if(return_front) break;
  }
}

void showCh9Menu()
{
  printf("��9��C������ҵ��1����\n");
  printf("0-�����ϼ��˵�\n");
  printf("1-��1�� �ж���������һ��ĵڼ���\n");
}

void pressCh9Ques(int quNum)
{
  return_front=0;
  switch(quNum)
  {
    case 0:return_front=1;return;
	case 1:	  
	  ch9_2();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch9\\ch9_2.c");
	  break;
  }
}
