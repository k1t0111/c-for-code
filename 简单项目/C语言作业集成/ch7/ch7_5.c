#include <stdio.h>
long fact(int i); 
void ch7_5()
{   
    //1.�û�����һ������ 
	int n,i;
	//2.���ó��������� 
	long term,sum=0; 
	printf("�����һ������n:");
	scanf("%d",&n);
	//3.ѭ���ṹ �������Ľ׳�i���� 
	for(i=1;i<=n;i++)
{
	term=fact(i); 
	sum+=term; 
} 
	printf("���Ľ׳˽��Ϊ%ld",sum);	 
	 
}
long fact(int i)
{
	//4.�����ж�������0
	if(
	i==0)
	return 1;
	else
	if(i>=1)
	return i*fact(i-1); 
} 
