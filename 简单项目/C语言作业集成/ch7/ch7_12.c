//完美数字的判定 
#include <stdio.h> 
void IsPerfect(int m);
void ch7_12()
{
	int m,op;
	do
	{
	printf("请输入一个整数:\n");
	scanf("%d",&m);
	IsPerfect(m);
	printf("继续1退出2\n");
	scanf("%d",&op);  
	} 
	while(op==1); 
} 
void IsPerfect(int m)
{
	int i,sum=0;//i表示他的可疑因数
	for(i=1;i<=m;i++)
	{
		if(m%i==0)
		sum+=i;  
	} 
	if(sum==m)
	printf("It is a perfect num\n");
	else 
	printf("It is not a perfect num\n");
}
