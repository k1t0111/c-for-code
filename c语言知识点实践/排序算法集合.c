#include<stdio.h>
int readScore(int score[]);
void  copy(int score[],int a[],int n);
int sort_bubble(int a[],int n);
int sort_exchange(int a[],int n);
int sort_selection(int a[],int n);
void printScore(int a[], int n);
main()
{
	int n,score[30],a[30],cnt;
	printf("�����벻����30�˵ĳɼ�������-1����������룺\n");
	//����ɼ� 
	n=readScore(score);
	//�����㷨�Ƚ�
	copy(score,a,n);	 
	printf("��ð�������㷨���ɼ����������Ľ��Ϊ��\n");
	cnt=sort_bubble(a,n);
	printScore(a,n);
	printf("��ð�������㷨�������Ĵ���Ϊ��%d\n",cnt);
	
	copy(score,a,n);	
	printf("�ý��������㷨���ɼ����������Ľ��Ϊ��\n");
	cnt=sort_exchange(a,n);
	printScore(a,n);
	printf("�ý��������㷨�������Ĵ���Ϊ��%d\n",cnt);

	copy(score,a,n);
	printf("��ѡ�������㷨���ɼ����������Ľ��Ϊ��\n");
	cnt=sort_selection(a,n);
	printScore(a,n);
	printf("��ѡ�������㷨�������Ĵ���Ϊ��%d\n",cnt);
 } 
//���ɼ�ת����a
void  copy(int score[],int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		a[i]=score[i];
	}
}

//ð������ 
int sort_bubble(int a[],int n)
{	int i,j,temp;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>=a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp; 
			}
		}
	}   
	 return i-1;
	
}
//���������㷨
int sort_exchange(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>=a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp; 
			}
		}
	}
	return i-1;
} 
//ѡ������ 
int sort_selection(int a[],int n)
{
	int i,j,temp,k;
	for(i=0;i<n;i++)
	{
		k=i; 
		for(j=k+1;j<n;j++)
		{
			if(a[k]>a[j])
			{
				k=j; 
			}
		}
		if(k!=i)
		{
			a[i]=a[k];	 
		}
	}
	return i-1;
}
//��������Ľ��
void printScore(int a[], int n)
{
	int j;
	for(j=0;j<n;j++)
	{
		printf("%6d\n",a[j]);
	}	
}
//����ɼ�����ȷ������ 
int readScore(int score[30])
{
	int j;
	for(j=0;j<=30;j++)
	{
		scanf("%d",&score[j]);
		if(score[j]==-1)
		return j; 
	} 
}

