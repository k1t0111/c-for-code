#include <stdio.h>
int isprime(int n);
void ch7_11()
{
	//�������� 
	int i,n,prime,op;//i��ѭ�����Ʋ���n����  
	do
	{
	printf("���ã�������һ������");
	scanf("%d",&n);
	isprime(n);
	if(isprime(n))
	printf("����������������û����������Ŷ��"); 
	else 
	{
		printf("�������ֲ�����������������Ϊ\n");
		for(i=1;i<=n;i++)
	{
		if(n%i==0)
		printf("%d\n",i); 
	} 		 
	}
	printf("���Ƿ�������أ�����������1����0");
	scanf("%d",&op);
	}
	while(op==1);
}
int isprime(int n)
{
	int j; 
	//�ж�����
	for(j=2;j<n;j++)
	{
		if(n%j==0)
		return 0 ;
	} 
	if(n==j)
	return 1; 
}
	 
