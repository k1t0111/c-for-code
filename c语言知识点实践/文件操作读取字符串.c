//�ļ�������ȡ�ַ��� 
#include <stdio.h>
#include <stdlib.h>
main()
{
	FILE *fp;
	char str[20];
	fp=fopen("D:\\2022��һc����\\maxbook.txt","a");
	if(fp==NULL)
	{
		printf("failure to open the file\n");
		exit(0);
	}
	printf("��������������Ҫ���ַ�����\n");
	gets(str); 
	fputs(str,fp);
	fclose(fp);
	fp=fopen("D:\\2022��һc����\\maxbook.txt","r");
	if(fp==NULL)
	{
		printf("failure to open the file\n");
		exit(0);
	}
	fgets(str,20,fp);
	printf("����Ҫ�Ľ��Ϊ��");
	puts(str); 
	fclose(fp);
} 
