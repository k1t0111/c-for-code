//ch5_11
#include <stdio.h>
int isleapyear(int year);
void ch5_11()
{
	//利用数组保存月份天数// 
	int days[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
	int year,month; 
	//输入
	printf("请输入您的年份和月份\n");
	scanf("%d%d",&year,&month); 
	printf("你输入的的天数%d\n",days[isleapyear(year)][month-1]);
}
//判断闰年平年
int isleapyear(int year)
{
	if(year%4==0&&year%100!=0)
	return 0;
	else
	return 1; 
}
