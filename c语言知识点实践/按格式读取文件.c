//按格式读取文件 
#include <stdio.h>
#include <stdlib.h>
main()
{
	char name[7],sex[3];             //姓名 性别 
	FILE *fp;
	fp=fopen("D:\\score.txt","r");
	if(fp==NULL)
	{
		printf("打开失败\n");
		exit(0); 
	} 
	fscanf(fp,"%6s",name);           //读出score内部数据 
	fscanf(fp,"%2s",sex);
	fclose(fp);
	fp=fopen("D:\\score1.txt","w");  
	if(fp==NULL)
	{
		printf("打开失败\n");
		exit(0); 
	}
	fprintf(fp,"%10s\n",name);           //将score内部数据写进score1中 
	fprintf(fp,"%4s",sex);
	fclose(fp);
} 
