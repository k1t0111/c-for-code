#include <stdio.h>
#include <stdlib.h>
//���������� 
void Sortfactor(int factor[],int cnt);
//����Ѱ���������� 
int Findfactor(int factor[],int num);
//�����ж���������
int isprime2(int num); 
void ch7_15() 
{
	/*(1)����һ������*/
	int i,num,judge,factor[20]={0},cnt;/*num��ʾ����  judge �ж����� factor��ʾ���� 
						iѭ���������   cnt ��������*/
	printf("���ã�������һ������:");
	scanf_s("%d",&num); 
	//(2)�ж�����
	judge=isprime2(num);
	if(judge)//�߼�����ת���ж� 
	{
		printf("It is a prime !");
	}
	else
	//(3)�ж�����
	{
		printf("It isn't a prime!\n");
		cnt=Findfactor(factor,num);
		//(4)�������� 
	    Sortfactor(factor,cnt);
		//(5)����˻� 
		printf("���������������������Ϊ:%d��",num);
		for(i=0;i<cnt;i++)
	{
		if(i==cnt-1)
		printf("%d\n",factor[i]);
		else 
		printf("%d,",factor[i]); 
	} 
	}  
} 
/*�������ܣ���������С�����������*/
void Sortfactor(int factor[],int cnt)
{
	int i,j,lemp;//i j ���ڽ���������ѭ�� lemp �������ֽ��� 
	for(i=0;i<cnt-1;i++)
	{
		for(j=i+1;j<cnt;j++)
		{
			if(factor[i]>factor[j]) 
			{
				lemp=factor[i];
				factor[i]=factor[j];
				factor[j]=lemp; 
			}
		} 
	} 
}
/*�������ܣ�Ѱ��һ����������������*/
int Findfactor(int factor[],int num)
{
	int i,cnt=0;//i��������� cnt �������� 
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			//�ж��������Ҽ��� 
			factor[cnt]=i;
			cnt++; 
		}
	}
	return cnt; 
}
/*�������ܣ��ж��Ƿ�Ϊ����*/
int isprime2(int num)
{
	int i;//i�ж��������
	for(i=2;i<num;i++)
	{
		//�ж��Ƿ��ܹ����� 
		if(num%i==0)
		break; 
	} 
	if(i==num)
	return 1;
	else
	return 0; 
}
