//ch3.c
#include<stdio.h> 

void showCh3Menu();				/*��ʾ��3�µĲ˵�*/
void pressCh3Ques(int quNum);	/*���е�3�µ���ҵ*/

extern int return_front; 		/*����return_frontΪ�ⲿ����*/

void pressCh3()
{
  int quNum;
  while(1)
  {
    showCh3Menu();
    printf("��������Ŀǰ�����ţ�");
    scanf("%d",&quNum);

    pressCh3Ques(quNum);
    if(return_front) break;
  }
}

void showCh3Menu()
{
  printf("��3��C������ҵ��3����\n");
  printf("0-�����ϼ��˵�\n");
  printf("1-��2�� ���������\n");
  printf("2-��3�� ������\n");
  printf("3-��4�� ��һԪ���η��̵ĸ�\n");
}

void pressCh3Ques(int quNum)
{
  return_front=0;
  switch(quNum)
  {
    case 0:return_front=1;return;
	case 1:	  
	  ch3_2();
	  viewCode("D:\\soft\\c����\\C������ҵ����\\ch3\\ch3_2.c");
	  break;
	case 2:
	  ch3_3();
	  viewCode("D:\\soft\\c����\\C������ҵ����\\ch3\\ch3_3.c");
	  break;
	case 3:
	  ch3_4();
	  viewCode("D:\\soft\\c����\\C������ҵ����\\ch3\\ch3_4.c");
	  break;	
  }
}
