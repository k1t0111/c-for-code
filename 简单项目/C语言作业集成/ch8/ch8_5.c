//1����ʮ������
//2���ֵ
//3��Сֵ
//4����
//5���
#include <stdio.h>
int FindMax(int A[]);
int FindMin(int A[],int max);
void swap(int *p,int *q);
void print(int A[]); 
void ch8_5()
{
	int A[10],i,max,min;//A �������� i ����ѭ�� 
	//1����ʮ������
	printf("��ӭ����С����!!!\n");
	printf("������ʮ������\n");
	for(i=0;i<10;i++)
	{
		printf("��%d��:",i+1); 
		scanf("%d",&A[i]); 
	}
	//2���ֵ
	max=FindMax(A);
	//3��Сֵ 
	min=FindMin(A,max);
	//4����
	swap(&A[max],&A[min]);
	//5���
	printf("���ֵΪ%d\n��СֵΪ%d\n",A[max],A[min]);
	printf("�������ݽ�����Ľ��Ϊ��\n"); 
	print(A); 
	 
} 
int FindMax(int A[])
{
	int i,num1,num2=0;//num1�±�  num2���޷�����
	for(i=0;i<10;i++)
	{
		if(A[i]>num2)
		{
			num2=A[i];//ת���µıȽϱ��� 
			num1=i;
		}
	} 
	return num1; 
}
int FindMin(int A[],int max)
{
	int i,num1,num2=A[max];//num1�±�  num2���޷�����
	for(i=0;i<10;i++)
	{
		if(A[i]<num2) 
		{
			num2=A[i];//ת���µıȽϱ��� 
			num1=i;
		} 
	}
	return num1;  
}
void swap(int *p,int *q)
{
	int lemp;
	lemp=*p;
	*p=*q;
	*q=lemp; 
}
void print(int A[])
{
	int i;
	for(i=0;i<10;i++)
	printf("%4d",A[i]); 
}

