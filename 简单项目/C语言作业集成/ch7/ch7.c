//ch7.c
#include<stdio.h>  
void showCh7Menu();/*��ʾ��7�µĲ˵�*/
void pressCh7Ques(int quNum);/*���е�7�µ���ҵ*/

extern int return_front; /*����return_frontΪ�ⲿ����*/

void pressCh7()
{
  int quNum;
  while(1)
  {
    showCh7Menu();
    printf("��������Ŀǰ�����ţ�");
    scanf("%d",&quNum);
    pressCh7Ques(quNum);
    if(return_front) break;
  }
}

void showCh7Menu()
{
  printf("��7��C������ҵ��13����\n");
  printf("0-�����ϼ��˵�\n");
  printf("1-��1�� ��������������ֵ\n");
  printf("2-��2�� ��С������\n");
  printf("3-��3�� ���һ�����ֵĽ׳�\n");
  printf("4-��4�� ���һ�����ֵĽ׳�֮��\n");
  printf("5-��5�� ��С��Լ��-��ٷ�\n");
  printf("6-��6�� ��С��Լ��-ŷ������㷨\n");
  printf("7-��7�� ��С��Լ��-�ݹ鷽��\n");
  printf("8-��8�� ����̽��-�����\n");
  printf("9-��9�� ����̽��-������\n");
  printf("10-��10�� ����̽��-������\n");
  printf("11-��11�� ����̽��-������\n");
  printf("12-��12�� Сѧ�˷�\n");
  printf("13-��13�� Сѧ��������\n");
  printf("14-��14�� Ѱ�������������������\n");
  printf("15-��15�� ʵʱ���\n");
}
void pressCh7Ques(int quNum)
{
  return_front=0;
  switch(quNum)
  {
    case 0:return_front=1;return;
	case 1:	  
	  ch7_2();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch7\\ch7_2.c");
	  break;
	case 2:
	  ch7_3();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch7\\ch7_3.c");
	  break;
	case 3:
	  ch7_4();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch7\\ch7_4.c");
	  break;
	case 4:	  
	  ch7_5();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch7\\ch7_5.c");
	  break;
	case 5:
	  ch7_6();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch7\\ch7_6.c");
	  break;
	case 6:
	  ch7_7();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch7\\ch7_7.c");
	  break;
	case 7:	  
	  ch7_8();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch7\\ch7_8.c");
	  break;
	case 8:
	  ch7_9();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch7\\ch7_9.c");
	  break;
	case 9:
	  ch7_10();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch7\\ch7_10.c");
	  break;
	case 10:	  
	  ch7_11();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch7\\ch7_11.c");
	  break;
	case 11:
	  ch7_12();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch7\\ch7_12.c");
	  break;
	case 12:	  
	  ch7_13();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch7\\ch7_13.c");
	  break;
	case 13:
	  ch7_14();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch7\\ch7_14.c");
	  break;	
	case 14:
	  ch7_15();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch7\\ch7_15.c");
	  break;		
	case 15:
	  ch7_16();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch7\\ch7_16.c");
	  break;		
  }
} 
