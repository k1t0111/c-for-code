//1����ɼ���ѧ��
//2ð�ݵ�һ�� �����
//3������ֵ 
#include <stdio.h>
int ReadScore1(long num[],int score[]);//����ѧ�źͳɼ� 
int FindMax1(int score[],int n);//�ж���������±� 
void ch8_4()
{
	//1����ɼ���ѧ��
	long num[40];//ѧ�� 
	int score[40],n,max;//�ɼ��������� 
	printf("����Ŷ����ӭ����С���򣡣���\n");
	printf("�����������İ༶��ѧ�źͳɼ�Ŷ��(���븺����������Ҳ�������ʮ��)\n");
	n=ReadScore1(num,score);
	printf("��һ��������%dλͬѧ��ѧ�źͳɼ�\n",n); 
	//2ð�ݵ�һ�� �����
	max=FindMax1(score,n);
	printf("���ĳɼ����ֵ�ǵ�%dλͬѧ\n�����±�Ϊ%d\n���ֵ\nѧ��:%ld   �ɼ���%d",max+1,max,num[max],score[max]); 
}
int ReadScore1(long num[],int score[])
{
	int i,cnt=0;//cnt ��¼���������� 
	for(i=0;i<40;i++)
	{
		printf("�ɼ�:");
		scanf("%d",&score[i]);
		if(score[i]<0)//���ƽ��� 
		break; 
		printf("ѧ��:");
		scanf("%ld",&num[i]);
		cnt++; 
	}
	return cnt-1; 
}
int FindMax1(int score[],int n)
{
	int i,rep1=0,rep2;//rep2��¼�±� 
	for(i=0;i<n;i++)
	{
		if(score[i]>rep1)
		{
			rep2=i;
			rep1=score[i];
		}
	}
	return rep2;
} 
