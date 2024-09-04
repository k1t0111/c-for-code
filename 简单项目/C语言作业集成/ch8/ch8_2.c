//1输入班级人数
//2输入成绩
//3分析不及格人数
//4输出不及格人数
#include <stdio.h>
int readscore(int sum);
void ch8_2() 
{
	int sum;
	//1输入班级人数
	printf("您好，欢迎来到小程序！！！\n");
	printf("请输入您班上班级人数哦！\n");
	scanf("%d",&sum);
	printf("您的班级人数为:%d\n",sum);
	//2输入成绩
	//4输出不及格人数
	printf("您班级一共有%d不及格哦！提醒他们要加油喽！",readscore(sum));		 
}
int readscore(int sum)
{
	int i,score,cnt=0; 
	printf("请输入每个学生的成绩");
	for(i=0;i<sum;i++)
	{
		scanf("%d",&score);
		//3分析不及格人数
		if(score<60)
		cnt++; 
	}
	return cnt; 
} 
