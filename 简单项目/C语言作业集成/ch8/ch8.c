//ch8.c
#include<stdio.h> 
void showCh8Menu();/*��ʾ��8�µĲ˵�*/
void pressCh8Ques(int quNum);/*���е�8�µ���ҵ*/
extern int return_front; /*����return_frontΪ�ⲿ����*/
void pressCh8()
{
  int quNum;
  while(1)
  {
    showCh8Menu();
    printf("��������Ŀǰ�����ţ�");
    scanf("%d",&quNum);

    pressCh8Ques(quNum);
    if(return_front) break;
  }
}

void showCh8Menu()
{
  printf("�ڰ���C������ҵ��5����\n");
  printf("0-�����ϼ��˵�\n");
  printf("1-�����ж�\n");
  printf("2-ƽ��ֵ�ж�\n");
  printf("3-���ֵ\n");
  printf("4-�������\n");
  printf("5-����б�\n");
  printf("6-��ί���ѡ��ƽ��������\n");
  printf("7-����Խ������\n");
  
}

void pressCh8Ques(int quNum)
{
  return_front=0;
  switch(quNum)
  {
    case 0:return_front=1;return;
	case 1:	  
	ch8_2();
	viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch8\\ch8_2.c");
	break;
	case 2:	  
	ch8_3();
	viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch8\\ch8_3.c");
	break;
	case 3:	  
	ch8_4();
	viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch8\\ch8_4.c");
	break;
	case 4:	  
	ch8_5();
	viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch8\\ch8_5.c");
	break;
	case 5:	  
	ch8_6();
	viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch8\\ch8_6.c");
	break;
	case 6:	  
	ch8_7();
	viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch8\\ch8_7.c");
	break;
	case 7:	
	ch8_8();
	viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch8\\ch8_8.c");
	break;
  }
}
