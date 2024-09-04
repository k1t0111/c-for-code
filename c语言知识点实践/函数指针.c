//����ָ��
#include <stdio.h>
//�����������ɼ�
int readscore(int score[],long num[]); 
//��������ѡ���������
void selectsort(int score[],long num[],int n,int (*compare)(int a,int b));
//�����������н���
void swap(int *c,long *e,int *d,long *f); 
//������������ 
int upsort(int a,int b);
//������������
int downsort(int a,int b);
//������������ɼ�
void printscore(int score[],int num[],int n); 
int main()
{
	int i,n,score[40];//����ɼ���ѧ�� 
	long num[40];
	char ch; 
	do
	{
	printf("���������ǰ��ϲ�������ʮ���˵�ѧ���Լ���Ӧ�ĳɼ�(����������������)\n"); 
	n=readscore(score,num);//�õ�����ɼ�������
	printf("���ܹ�������%d���˵ĳɼ�\n",n); 
	printf("��������������1��������������2\n");
	scanf("%d",&i);
	if(i==1)
	selectsort(score,num,n,upsort);
	else
	selectsort(score,num,n,downsort);
	printscore(score,num,n);
	printf("���Ƿ���Ҫ���� ����(Y��y) �˳�(N��n)\n");
	scanf(" %c",&ch); 
	} 
	while(ch=='y'||ch=='Y'); 
	return 0; 
} 
//����ɼ���ѧ��
int readscore(int score[],long num[])
{ 
	int i=-1;
	do
	{
		i++;
		printf("����ѧ�źͳɼ�:");
		scanf("%ld%d",&num[i],&score[i]);
		printf("\n");
		if(num[i]<0)
		return i;
	}
	while(num[i]>=0);  
} 
//ָ����ú�������������
void selectsort(int score[],long num[],int n,int (*compare)(int a,int b))
{
	//ѡ�����򷨽������� 
	int i,k,j;
	for(i=0;i<n;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if((*compare)(score[k],score[j]))
			k=j; 
		}
		if(k!=i)
		{
			//����swap�������� 
			swap(&score[i],&num[i],&score[k],&num[k]); 
		}
	}
} 
//����������
int upsort(int a,int b)
{
	return a>b;	
}
//����������
int downsort(int a,int b)
{
	return a<b;	
}  
//���� 
void swap(int *c,long *e,int *d,long *f)//����cdef����һ����ʽ���� 
{
	int lemp;
	lemp=*c;
 	*c=*d;
	*d=lemp;
	lemp=*e;
 	*e=*f;
	*f=lemp;
}
//����ɼ� 
void printscore(int score[],int num[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%ѧ�ţ�%ld �ɼ�: %d\n",num[i],score[i]);
	}
} 
