//ch5_9
#include <stdio.h>
void ch5_9()
{
	char ch;
	printf("������һ���ַ���\n");
	scanf(" %c",&ch);
	if(ch>=65&&ch<=90)
	printf("��д��ĸ\n");
	else
	if(ch>=97&&ch<=122)
	printf("Сд��ĸ\n");
	else
	if(ch>=48&&ch<=57)
	printf("�����ַ�\n");
	else
	if(ch=32)
	printf("�ո�\n");
	else
	printf("�����ַ�\n"); 
}
