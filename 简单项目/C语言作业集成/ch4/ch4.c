//ch4.c
#include<stdio.h> 
void showCh4Menu();/*��ʾ��4�µĲ˵�*/
void pressCh4Ques(int quNum);/*���е�4�µ���ҵ*/

extern int return_front; /*����return_frontΪ�ⲿ����*/

void pressCh4()
{
  int quNum;
  while(1)
  {
    showCh4Menu();
    printf("��������Ŀǰ�����ţ�");
    scanf("%d",&quNum);

    pressCh4Ques(quNum);
    if(return_front) break;
  }
}

void showCh4Menu()
{
  printf("������C������ҵ��1����\n");
  printf("0-�����ϼ��˵�\n");
  printf("1-acs||�� \n");

}

void pressCh4Ques(int quNum)
{
  return_front=0;
  switch(quNum)
  {
    case 0:return_front=1;return;
	case 1:	  
	{
	ch4_2();
	viewCode("D:\\�������\\2022��һc����\\C������ҵ����\\ch4\\ch4_2.c");
	break;
	}
  }
}
