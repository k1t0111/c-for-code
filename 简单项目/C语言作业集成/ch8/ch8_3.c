//1����ɼ�
//2��ȡƽ��ֵ
//3�Ƚϳɼ�
//4�������
#include <stdio.h>
int ReadScore(int score[]); 
int Average(int score[],int n);
void ch8_3()
{
	int score[40],n,i,cnt=0;//n������ 
	float average;
	printf("��ӭ��������У԰ϵͳ������\n");
	printf("���������༶�ɼ�(���븺��ʱ����������Ҳ�������ʮ)\n");
	//1����ɼ�
	n=ReadScore(score);
	printf("��һ��������%d���˵ĳɼ�\n",n);
	//2��ȡƽ��ֵ
	average=Average(score,n);
	//3�Ƚϳɼ�
	for(i=0;i<n;i++)
	{
		if(score[i]>average)
		cnt++; 
	} 
	//4�������
	printf("����ƽ���ɼ�������һ����%d��",cnt); 
}
int ReadScore(int score[])
{
	int cnt=0,i;
	for(i=0;i<40;i++)
	{
		scanf("%d",&score[i]);
		cnt++; 
		if(score[i]<0)
		break; 
	} 
	return cnt-1;
}
int Average(int score[],int n)
{
	int sum=0,i;
	float average;
	for(i=0;i<n;i++)
	{
		sum+=score[i];
	}
	return (float)sum/n;
} 
