//ch5_10
#include <stdio.h>
void ch5_10()
{
	int score;
	printf("请输入您的百分制成绩\n");
	scanf("%d",&score);
	if(score>=90&&score<=100)
	printf("您的等级成绩为A哦\n");
	else
	if(score>=80&&score<=90)
	printf("您的等级成绩为B哦\n");
	else
	if(score>=70&&score<=80)
    printf("您的等级成绩为C哦\n");
	else
	if(score>=60&&score<=70)
	printf("您的等级成绩为D哦\n");
	else
	printf("您的等级成绩为E哦\n"); 
 } 
