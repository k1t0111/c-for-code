//函数指针
#include <stdio.h>
//声明函数读成绩
int readscore(int score[],long num[]); 
//声明函数选择降序和升序
void selectsort(int score[],long num[],int n,int (*compare)(int a,int b));
//声明函数进行交换
void swap(int *c,long *e,int *d,long *f); 
//声明函数升序 
int upsort(int a,int b);
//声明函数降序
int downsort(int a,int b);
//声明函数输出成绩
void printscore(int score[],int num[],int n); 
int main()
{
	int i,n,score[40];//定义成绩和学号 
	long num[40];
	char ch; 
	do
	{
	printf("请输入你们班上不超过四十个人的学号以及对应的成绩(输入两个负数结束)\n"); 
	n=readscore(score,num);//得到输入成绩的总数
	printf("您总共输入了%d个人的成绩\n",n); 
	printf("升序排列请输入1降序排列请输入2\n");
	scanf("%d",&i);
	if(i==1)
	selectsort(score,num,n,upsort);
	else
	selectsort(score,num,n,downsort);
	printscore(score,num,n);
	printf("您是否需要继续 继续(Y或y) 退出(N或n)\n");
	scanf(" %c",&ch); 
	} 
	while(ch=='y'||ch=='Y'); 
	return 0; 
} 
//输入成绩和学号
int readscore(int score[],long num[])
{ 
	int i=-1;
	do
	{
		i++;
		printf("输入学号和成绩:");
		scanf("%ld%d",&num[i],&score[i]);
		printf("\n");
		if(num[i]<0)
		return i;
	}
	while(num[i]>=0);  
} 
//指针调用函数升序降序排列
void selectsort(int score[],long num[],int n,int (*compare)(int a,int b))
{
	//选择法排序法进行排序 
	int i,k,j;
	for(i=0;i<n;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if((*compare)(score[k],score[j]))
			k=j; 
		}
		if(k!=i)
		{
			//调用swap函数交换 
			swap(&score[i],&num[i],&score[k],&num[k]); 
		}
	}
} 
//定义升序函数
int upsort(int a,int b)
{
	return a>b;	
}
//函数降序函数
int downsort(int a,int b)
{
	return a<b;	
}  
//交换 
void swap(int *c,long *e,int *d,long *f)//利用cdef代表一种形式参数 
{
	int lemp;
	lemp=*c;
 	*c=*d;
	*d=lemp;
	lemp=*e;
 	*e=*f;
	*f=lemp;
}
//输出成绩 
void printscore(int score[],int num[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%学号：%ld 成绩: %d\n",num[i],score[i]);
	}
} 
