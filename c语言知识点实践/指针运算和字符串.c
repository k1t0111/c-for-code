//ָ���ַ��� 
#include <stdio.h>
#include <string.h> 
char *print(char *c,char *d); 
main()
{
	/*int i,a[5]={1,3,5,7,9},*p;
	p=a;
	for(i=0;i<5;i++)
	{
		printf("%d",(*p)++); 
	}*/
	char a[]={"hello world����"},b[20],c[30];
	/*int len;
	len=strlen(a);
	printf("%d",len);*/
	gets(b); 
	//printf("��ã�����ĺ������Һð���"); 
	/*if(strcmp(a,b)<0)
	printf("�����");
	else 
	if(strcmp(a,b)>0)
	printf("���治��");
	else
	printf("����Ĳ���");*/
	puts(a); 
 	c[30]=*print(b,"hello world����");
 	puts(c); 
}
char *print(char *c,char *d)
{
	strcpy(c,d);
	return c; 
}
 
