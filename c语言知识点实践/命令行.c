#include <stdio.h>
#include <stdlib.h> 
int main(int argc,char *argv[])
{
	int i;       //i ����ѭ�� 
	printf("���ã���һ��������%d������\n",argc);
	if(argc>1)
	{
		printf("file name ��%s\n",argv[0]);
		for(i=1;i<argc;i++)
		printf("%s",argv[i]); 
	}
	else
	exit(0);
	return 0; 
} 
