//指针字符串 
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
	char a[]={"hello world！！"},b[20],c[30];
	/*int len;
	len=strlen(a);
	printf("%d",len);*/
	gets(b); 
	//printf("你好，你真的好美，我好爱你"); 
	/*if(strcmp(a,b)<0)
	printf("你真好");
	else 
	if(strcmp(a,b)>0)
	printf("你真不好");
	else
	printf("你真的不好");*/
	puts(a); 
 	c[30]=*print(b,"hello world！！");
 	puts(c); 
}
char *print(char *c,char *d)
{
	strcpy(c,d);
	return c; 
}
 
