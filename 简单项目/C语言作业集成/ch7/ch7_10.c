#include <stdio.h>
int isprime1(int i);
void ch7_10()
{
	//���뷶Χ
	int i,n,term,sum=0;//i��ѭ�����Ʋ���n��Χ�ٽ� 
	printf("���ã�����������Ҫ�������жϷ�Χ�������");
	scanf("%d",&n);
	//��ѭ��
	for(i=2;i<=n;i++)
	{
	//���
		term=isprime1(i);
		sum+=term; 
	}
	//�������
	printf("%d",sum); 		 
	
}

int isprime1(int i)
{
	int j; 
	//�ж�����
	for(j=2;j<i;j++)
	{
		if(i%j==0)
		return 0 ;
	} 
	if(i==j)
	return i; 
}
	
	 
