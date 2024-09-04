//ch4_2.c 
#include <stdio.h>
void ch4_2()
{
	char a;
	printf("请输入一个小写英文字母");
	scanf(" %c",&a);
	a=a-32;
	printf("您输入的字母为和asc||的值为；%c\n%d\n",a,a);
} 
