#include <stdio.h>
//输入打分成绩
void Readscore(int score[]);
void printsign(int m); 
#define N 6 
void ch8_6()
{
	int i,score[N]; 
	//1输入打分成绩
	printf("欢迎来到小程序！！！\n");
	printf("请输入每个人的打分成绩哦！(十分制)\n"); 
	Readscore(score); 
	//2输出下标和数字成绩
	printf("Grade    Count    Histogram\n");
	for(i=0;i<N;i++)
	{
		printf("%3d     %4d      ",i+1,score[i]);
		//3输出星号 
		printsign(score[i]); 
	} 
}
void Readscore(int score[])
{
	int i;//控制循环
	for(i=0;i<N;i++)
	{
		printf("第%d位:",i+1);
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
  
