//1输入成绩
//2求取平均值
//3比较成绩
//4输出人数
#include <stdio.h>
int ReadScore(int score[]); 
int Average(int score[],int n);
void ch8_3()
{
	int score[40],n,i,cnt=0;//n总人数 
	float average;
	printf("欢迎来到优乐校园系统！！！\n");
	printf("请输入您班级成绩(输入负数时则输入结束且不超过四十)\n");
	//1输入成绩
	n=ReadScore(score);
	printf("您一共输入了%d个人的成绩\n",n);
	//2求取平均值
	average=Average(score,n);
	//3比较成绩
	for(i=0;i<n;i++)
	{
		if(score[i]>average)
		cnt++; 
	} 
	//4输出人数
	printf("超过平均成绩的人数一共有%d个",cnt); 
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
