#include <stdio.h>
//�����ֳɼ�
void Readscore(int score[]);
void printsign(int m); 
#define N 6 
void ch8_6()
{
	int i,score[N]; 
	//1�����ֳɼ�
	printf("��ӭ����С���򣡣���\n");
	printf("������ÿ���˵Ĵ�ֳɼ�Ŷ��(ʮ����)\n"); 
	Readscore(score); 
	//2����±�����ֳɼ�
	printf("Grade    Count    Histogram\n");
	for(i=0;i<N;i++)
	{
		printf("%3d     %4d      ",i+1,score[i]);
		//3����Ǻ� 
		printsign(score[i]); 
	} 
}
void Readscore(int score[])
{
	int i;//����ѭ��
	for(i=0;i<N;i++)
	{
		printf("��%dλ:",i+1);
		scanf("%d",&score[i]); 
	} 
}
void printsign(int m)
{
	int i;	
	for(i=0;i<m;i++)
	{
		printf("*");
	} 
	printf("\n");
}
  
