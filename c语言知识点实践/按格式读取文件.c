//����ʽ��ȡ�ļ� 
#include <stdio.h>
#include <stdlib.h>
main()
{
	char name[7],sex[3];             //���� �Ա� 
	FILE *fp;
	fp=fopen("D:\\score.txt","r");
	if(fp==NULL)
	{
		printf("��ʧ��\n");
		exit(0); 
	} 
	fscanf(fp,"%6s",name);           //����score�ڲ����� 
	fscanf(fp,"%2s",sex);
	fclose(fp);
	fp=fopen("D:\\score1.txt","w");  
	if(fp==NULL)
	{
		printf("��ʧ��\n");
		exit(0); 
	}
	fprintf(fp,"%10s\n",name);           //��score�ڲ�����д��score1�� 
	fprintf(fp,"%4s",sex);
	fclose(fp);
} 
