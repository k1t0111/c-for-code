//�������ֵ��ж� 
#include <stdio.h> 
void IsPerfect(int m);
void ch7_12()
{
	int m,op;
	do
	{
	printf("������һ������:\n");
	scanf("%d",&m);
	IsPerfect(m);
	printf("����1�˳�2\n");
	scanf("%d",&op);  
	} 
	while(op==1); 
} 
void IsPerfect(int m)
{
	int i,sum=0;//i��ʾ���Ŀ�������
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
