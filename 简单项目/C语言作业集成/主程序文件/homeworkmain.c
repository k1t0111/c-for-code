#include <stdio.h>
#include <stdlib.h>

void showMainMenu();/*��ʾ���˵�*/
void showChapMenu(int chNum);/*��ʾ�²˵������������г���*/
int return_front=0; /*return_front=1ʱ�����ϼ��˵�*/ 

void main() 
{
  int chNum;
  while(1)
  {
    showMainMenu();
    printf("�������½�ǰ�����ţ�");
    scanf("%d",&chNum);
    showChapMenu(chNum);
  }	
}

void showMainMenu()
{
  printf("�ܿ�˧��C���Գ���\n");
  printf("0-�˳�����\n");
  printf("1-��3����ҵ��3����\n");
  printf("2-��4����ҵ��1����\n");
  printf("3-��5����ҵ��12����\n");
  printf("4-��6����ҵ��19����\n");
  printf("5-��7����ҵ��15����\n");
  printf("6-��8����ҵ��7����\n");
  printf("7-��9����ҵ��1����\n");
}

void showChapMenu(int chNum)
{
  switch(chNum)
  {
    case 0:printf("��ӭ�´�������\n");exit(0);//�˳����� 
	case 1:pressCh3();break;//��3�´������
	case 2:pressCh4();break;//��4�´������
	case 3:pressCh5();break;//��5�´������
	case 4:pressCh6();break;//��6�´������
	case 5:pressCh7();break;//��7�´������
	case 6:pressCh8();break;//��8�´������
	case 7:pressCh9();break;//��9�´������
	default:printf("���������Ż�û�ж�Ӧ�Ĵ������\n");break;
  }
}

/*�鿴Դ����ĺ���*/ 
void viewCode(char* fileName)
{
  FILE *fp;
  char ch;
  printf("Ҫ�鿴Դ��������Ҫ������Y��y�������������������ַ���");
  scanf(" %c",&ch);
  if(ch!='Y'&&ch!='y')return;
  if((fp=fopen(fileName,"r"))==NULL)
  {
    printf("���ļ�ʧ�ܣ�\n");
	return;
  }

  while((ch=fgetc(fp))!=EOF)
  {
    putchar(ch);
  }
  fclose(fp);
}

