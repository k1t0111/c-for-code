//ch5.c
#include<stdio.h> 

void showCh5Menu();/*��ʾ��5�µĲ˵�*/
void pressCh5Ques(int quNum);/*���е�5�µ���ҵ*/

extern int return_front; /*����return_frontΪ�ⲿ����*/

void pressCh5()
{
  int quNum;
  while(1)
  {
    showCh5Menu();
    printf("��������Ŀǰ�����ţ�");
    scanf("%d",&quNum);

    pressCh5Ques(quNum);
    if(return_front) break;
  }
}

void showCh5Menu()
{
  printf("��5��C������ҵ��12����\n");
  printf("0-�����ϼ��˵�\n");
  printf("1-��1�� �������ֵ\n");
  printf("2-��2�� �ж���ż��\n");
  printf("3-��3�� ����������\n");
  printf("4-��4�� ���б�����Ϣ�ܼ�\n");
  printf("5-��5�� �ж�����ƽ��\n");
  printf("6-��6�� ���ű��ʽ�ж�����ƽ��\n");
  printf("7-��7�� ��СдӢ����ĸת��\n");
  printf("8-��8�� �ж��ַ�\n");
  printf("9-��9�� �ɼ�ת��Ϊ�����\n");
  printf("10-��10�� ����·�����\n");
  printf("11-��11�� ���Ԥ��\n");
  printf("12-��12�� �����ж�\n"); 
}

void pressCh5Ques(int quNum)
{
  return_front=0;
  switch(quNum)
  {
    case 0:return_front=1;return;
	case 1:	  
	  ch5_2();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch5\\ch5_2.c");
	  break;
	case 2:
	  ch5_3();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch5\\ch5_3.c");
	  break;
	case 3:
	  ch5_4();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch5\\ch5_4.c");
	  break;
	case 4:	  
	  ch5_5();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch5\\ch5_5.c");
	  break;
	case 5:
	  ch5_6();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch5\\ch5_6.c");
	  break;
	case 6:
	  ch5_7();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch5\\ch5_7.c");
	  break;
	case 7:	  
	  ch5_8();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch5\\ch5_8.c");
	  break;
	case 8:
	  ch5_9();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch5\\ch5_9.c");
	  break;
	case 9:
	  ch5_10();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch5\\ch5_10.c");
	  break;
	case 10:	  
	  ch5_11();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch5\\ch5_11.c");
	  break;
	case 11:
	  ch5_12();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch5\\ch5_12.c");
	  break;
	case 12:
	  ch5_13();
	  viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch5\\ch5_13.c");
	  break;
  }
}
