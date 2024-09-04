//ch5_9
#include <stdio.h>
void ch5_9()
{
	char ch;
	printf("ÇëÊäÈëÒ»¸ö×Ö·û£º\n");
	scanf(" %c",&ch);
	if(ch>=65&&ch<=90)
	printf("´óÐ´×ÖÄ¸\n");
	else
	if(ch>=97&&ch<=122)
	printf("Ð¡Ð´×ÖÄ¸\n");
	else
	if(ch>=48&&ch<=57)
	printf("Êý×Ö×Ö·û\n");
	else
	if(ch=32)
	printf("¿Õ¸ñ\n");
	else
	printf("ÆäËû×Ö·û\n"); 
}
