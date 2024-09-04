#include <stdio.h>
struct number
{
	/*结构体 每个选手信息*/
	char name[8];//姓名 性别 年龄 序号 成绩 
	char sex[4];
	int old; 
	int sort;
	int score[6];
	float average; 
};
void intscore(struct number NUMBER[],int judge,int num);//输入评委打分 
void Findnum(struct number NUMBER[],int judge,int num);//最大最小值和平均分 
void Sortnum(struct number NUMBER[],int judge,int num);//选手排序 
void putnumber(struct number NUMBER[],int num);//输出排序后顺序 
void ch8_7() 
{
	/*(1)输入评委人数 选手人数*/
	int judge,num;//(1.1)judge 评委数 num 选手数 
	struct number NUMBER[10];//(1.2)选手信息
	char op; 
	do
	{
	printf("欢迎来到评分系统！请输入评委数(<6)和选手数(<10):\n");
	scanf("%d %d",&judge,&num);
	getchar();   //(1.3)去除回车 
	/*(2)录入选手信息*/ 
	intscore(NUMBER,judge,num);
	/*(3)每个选手的最低和最高分和平均分*/
	Findnum(NUMBER,judge,num);
	/*(4)选手排序*/
	Sortnum(NUMBER,judge,num);
	/*(5)输出选手信息*/
	putnumber(NUMBER,num);
	printf("您是否需要再次输入?是(y或Y)否(n或N)");
	scanf(" %c",&op);
	}
	while(op=='Y'||op=='y'); 
} 
/*函数功能：输入评委打分成绩和选手基本信息*/
void intscore(struct number NUMBER[],int judge,int num)
{
	int i,j;//(2.1)i控制选手人数循环 j 控制评委人数循环 
	for(i=0;i<num;i++)
	{
		//输入姓名 性别 年龄 序号 
		printf("第%d位：\n姓名：",i+1);
		scanf("%s",NUMBER[i].name);
		printf("\n性别:"); 
		scanf("%s",&NUMBER[i].sex);
		printf("\n年龄:");
		scanf("%d",&NUMBER[i].old);
		printf("\n序号:");
		scanf("%d",&NUMBER[i].sort);
		printf("\n"); 
		for(j=0;j<judge;j++)
		{
			//输入各个评委对学员打分 
			printf("第%d位评委分数:",j+1); 
			scanf("%d",&NUMBER[i].score[j]);
			printf("\n");
		} 
	} 
}
/*函数功能：求每个学员的平均值*/
void Findnum(struct number NUMBER[],int judge,int num)
{
	int i,j,max[10],min[10],sum[10];/*(3.1)保存各个选手的最大值和最小值
							i选手循环 j评委循环
							sum每个学员打分总合*/
	for(i=0;i<num;i++)
	{
		//(3.2)打擂法赋初值 
		max[i]=0;
		min[i]=10;
		for(j=0;j<judge;j++)
		{
			//(3.3)打擂法求最大最小值 
			if(NUMBER[i].score[j]>max[i])
			max[i]=NUMBER[i].score[j];
			if(NUMBER[i].score[j]<min[i])
			min[i]=NUMBER[i].score[j];
		} 
	}
	//(3.4)求学员平均值
	for(i=0;i<num;i++)
	{
		sum[i]=0; 
		for(j=0;j<judge;j++)
		{
			//(3.5)每个学员的分数总合 
			sum[i]+=NUMBER[i].score[j]; 
		}
		//(3.6)去掉最大最小值 
		sum[i]=sum[i]-max[i]-min[i];
		NUMBER[i].average=(float)sum[i]/(float)(judge-2);
	} 
}
/*函数功能：学员成绩排序*/
void Sortnum(struct number NUMBER[],int judge,int num)
{
	int d,i,j;//d 选择排序法参数 i选手循环 j 评委分数循环 
	struct number lemp[10];//(4.1)交换法所用参数 
	for(i=0;i<num;i++)
	{
		d=i;
		for(j=i+1;j<num;j++)
		{
			//(4.2)选择交换法 记录最大下标 
			if(NUMBER[d].average<NUMBER[j].average)
			d=j;
		} 
		//(4.3)选择交换法 交换 
		if(d!=i)
		{
			lemp[i]=NUMBER[i];
			NUMBER[i]=NUMBER[d];
			NUMBER[d]=lemp[i]; 
		} 
	} 
}
void putnumber(struct number NUMBER[],int num)
{
	int i;//(5.1)i 控制循环
	//(5.2)输出界面布局 
	printf("您的学员打分后成绩排序为:\n");
	printf("姓名     性别   年龄  序号  平均分 \n");
	//循环输出排序后结果 
	for(i=0;i<num;i++) 
	{
		printf("%-10s%-6s%-6d%-6d%-8f\n"
		,NUMBER[i].name,NUMBER[i].sex,NUMBER[i].old,
		NUMBER[i].sort,NUMBER[i].average); 
	}
}
