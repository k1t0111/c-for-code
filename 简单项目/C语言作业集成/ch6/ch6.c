//ch6.c
#include<stdio.h> 

void showCh6Menu();/*��ʾ��6�µĲ˵�*/
void pressCh6Ques(int quNum);/*���е�6�µ���ҵ*/

extern int return_front; /*����return_frontΪ�ⲿ����*/

void pressCh6()
{
  int quNum;
  while(1)
  {
    showCh6Menu();
    printf("��������Ŀǰ�����ţ�");
    scanf("%d",&quNum);

    pressCh6Ques(quNum);
    if(return_front) break;
  }
}

void showCh6Menu()
{
  printf("��6��C������ҵ��19����\n");
  printf("0-�����ϼ��˵�\n");
  printf("1-��1�� ������巶Χ����������ƽ��������\n");
  printf("2-��2�� ����ת�������¶�\n");
  printf("3-��3�� ���д�Ǯ��һ�걾��\n");
  printf("4-��4�� ��ҵ��ֵ����ʱ��\n");
  printf("5-��5�� ���Բ���ʽ���ֵ\n");
  printf("6-��6�� ���e����ֵ\n");
  printf("7-��7�� ˮ�ɻ�����\n");
  printf("8-��8�� �׳���m������\n");
  printf("9-��9�� �������ĺ�\n");
  printf("10-��10�� ��һ�����˸�������ĺ�\n");
  printf("11-��11�� �Է���ٷ���������\n");
  printf("12-��12�� ����ͬ��\n");
  printf("13-��13�� ���㹫��ĸ��С����Ŀ\n");
  printf("14-��14�� �һ������\n");
  printf("15-��15�� ����žų˷���\n");
  printf("16-��16�� ������\n");
  printf("17-��17�� ��ͨ���·�\n");
  printf("18-��18�� ����������\n");
  printf("19-��19�� ��������ƭ��\n");
}

void pressCh6Ques(int quNum)
{
  return_front=0;
  switch(quNum)
  {
    case 0:return_front=1;return;
	case 1:	  
	  ch6_2();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch6\\ch6_2.c");
	  break;
	case 2:
	  ch6_3();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch6\\ch6_3.c");
	  break;
	case 3:
	  ch6_4();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch6\\ch6_4.c");
	  break;
	case 4:	  
	  ch6_5();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch6\\ch6_5.c");
	  break;
	case 5:
	  ch6_6();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch6\\ch6_6.c");
	  break;
	case 6:
	  ch6_7();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch6\\ch6_7.c");
	  break;
	case 7:	  
	  ch6_8();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch6\\ch6_8.c");
	  break;
	case 8:
	  ch6_9();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch6\\ch6_9.c");
	  break;
	case 9:
	  ch6_10();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch6\\ch6_10.c");
	  break;
	case 10:	  
	  ch6_11();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch6\\ch6_11.c");
	  break;
	case 11:
	  ch6_12();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch6\\ch6_12.c");
	  break;
	case 12:
	  ch6_13();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch6\\ch6_13.c");
	  break;
	case 13:	  
	  ch6_14();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch6\\ch6_14.c");
	  break;
	case 14:
	  ch6_15();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch6\\ch6_15.c");
	  break;
	case 15:
	  ch6_16();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch6\\ch6_16.c");
	  break;
	case 16:	  
	  ch6_17();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch6\\ch6_17.c");
	  break;
	case 17:
	  ch6_18();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch6\\ch6_18.c");
	  break;
	case 18:
	  ch6_19();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch6\\ch6_19.c");
	  break;
	case 19:
	  ch6_20();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch6\\ch6_20.c");
	  break;  	
  }
}
