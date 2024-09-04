//1输入成绩和学号
//2冒泡第一轮 找最大
//3输出最大值 
#include <stdio.h>
int ReadScore1(long num[],int score[]);//输入学号和成绩 
int FindMax1(int score[],int n);//判断最大数组下标 
void ch8_4()
{
	//1输入成绩和学号
	long num[40];//学号 
	int score[40],n,max;//成绩和总人数 
	printf("您好哦！欢迎来到小程序！！！\n");
	printf("请您输入您的班级的学号和成绩哦！(输入负数代表结束且不超过四十个)\n");
	n=ReadScore1(num,score);
	printf("您一共输入了%d位同学的学号和成绩\n",n); 
	//2冒泡第一轮 找最大
	max=FindMax1(score,n);
	printf("您的成绩最大值是第%d位同学\n数组下标为%d\n最大值\n学号:%ld   成绩：%d",max+1,max,num[max],score[max]); 
}
int ReadScore1(long num[],int score[])
{
	int i,cnt=0;//cnt 记录输入总人数 
	for(i=0;i<40;i++)
	{
		printf("成绩:");
		scanf("%d",&score[i]);
		if(score[i]<0)//控制结束 
		break; 
		printf("学号:");
		scanf("%ld",&num[i]);
		cnt++; 
	}
	return cnt-1; 
}
int FindMax1(int score[],int n)
{
	int i,rep1=0,rep2;//rep2记录下标 
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
