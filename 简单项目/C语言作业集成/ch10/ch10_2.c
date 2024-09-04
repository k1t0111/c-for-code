#include <stdio.h>
int main()
{
	char str[12];// 保存字符串
	printf("您好!请输入日期:"); 
	gets(str);
	switch(str[0])
	{
		case 'M' :
			printf("1");break; 
		case 'T' :
		{
			if(str[1]=='u')
			{
				printf("2");
				break;
			}
			else
			{
				printf("4");
				break;
			}
		}
		case 'W' :
			printf("3");break;
		case 'F' :
			printf("5");break;
		case 'S' :
		{
			if(str[1]=='a')
			{
				printf("6");
				break;
			}
			else
			{
				printf("7");
				break;
			}
		}
		default :printf("error！"); 
	}
	return 0; 
} 
