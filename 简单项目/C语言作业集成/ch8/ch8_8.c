#include <stdio.h>
#include <stdlib.h>
void ch8_8() 
{
/*1�������*/
	int n,**p,i,j,sum;                         // n������� p ����ָ��ָ���ά���� i,jѭ�� sum��� 
	printf("��������������Ҫ�ľ��������");	   //1.1������� 
	scanf("%d",&n);                                 
	p=(int **)calloc(n,sizeof(int *));		   //1.2��̬�������� 
	if(p==NULL)								   //1.3�жϿռ��Ƿ���� 
	{
		printf("not have enough space");
		exit(0); 
	} 
	for(i=0;i<n;i++)
	{
		p[i]=(int *)calloc(n,sizeof(int));
		if(p==NULL)							   //1.3�жϿռ��Ƿ���� 
		{
			printf("not have enough space");
			exit(0); 
		}
	}
	printf("��������\n"); 
	for(i=0;i<n;i++)						   //1.4��ʽ��������� 
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&p[i][j]);
		}
	}
	for(i=0;i<n;i++)						   //1.5��ʽ��������� 
	{
		for(j=0;j<n;j++)
		{
			printf("%d",p[i][j]);
		}
		printf("\n"); 
	} 
/*2�Խ������*/
	for(i=0,j=0,sum=0;i<n;i++,j++)			   //2.1��Խ������ 
	{
		sum+=p[i][j]; 
	} 
	for(i=0,j=n-1;i<n;i++,j--)			       //2.2�ҶԽ������ 
	{
		sum+=p[i][j]; 
	}
/*3���������ж�*/
	if(n%2!=0)
	{
		sum-=p[n/2][n/2]; 					   //3.1ɾ�������м��ظ����� 
	}
/*4�ͷŶ�̬�ռ�*/
	for(i=0;i<n;i++)
	free(p[i]);
	free(p); 
/*5�������*/
	printf("�������ľ���Խ�����ͣ�%d",sum);
}

 
