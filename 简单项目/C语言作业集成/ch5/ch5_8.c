//ch5_8
#include <stdio.h>
void ch5_8()
{
	 char ch;
	 printf("������һ���ַ���\n");
	 scanf(" %c",&ch);
	 if(ch>=65&&ch<=90)
	 {
	 ch=ch+32;
	 printf("ת������ַ�Ϊ����ֵΪ��%c %d\n",ch,ch);

		  }
     else
	 if(ch>=97&&ch<=122)
	 {
	 ch=ch-32;
	 printf("ת������ַ�Ϊ����ֵΪ��%c %d\n",ch,ch);
	 }
	 else
	 printf("ת������ַ�Ϊ����ֵΪ��%c %d\n",ch,ch); 
 } 
