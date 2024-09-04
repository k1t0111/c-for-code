#include <stdio.h>
#include <stdlib.h> 
int main(int argc,char *argv[])
{
	int i;       //i 控制循环 
	printf("您好！你一共输入了%d个参数\n",argc);
	if(argc>1)
	{
		printf("file name ：%s\n",argv[0]);
		for(i=1;i<argc;i++)
		printf("%s",argv[i]); 
	}
	else
	exit(0);
	return 0; 
} 
