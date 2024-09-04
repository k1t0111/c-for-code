//文件操作读取字符串 
#include <stdio.h>
#include <stdlib.h>
main()
{
	FILE *fp;
	char str[20];
	fp=fopen("D:\\2022大一c语言\\maxbook.txt","a");
	if(fp==NULL)
	{
		printf("failure to open the file\n");
		exit(0);
	}
	printf("您好请输入您需要的字符串：\n");
	gets(str); 
	fputs(str,fp);
	fclose(fp);
	fp=fopen("D:\\2022大一c语言\\maxbook.txt","r");
	if(fp==NULL)
	{
		printf("failure to open the file\n");
		exit(0);
	}
	fgets(str,20,fp);
	printf("您需要的结果为：");
	puts(str); 
	fclose(fp);
} 
