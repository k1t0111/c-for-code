#include<stdio.h>
int readScore(int score[]);
void  copy(int score[],int a[],int n);
int sort_bubble(int a[],int n);
int sort_exchange(int a[],int n);
int sort_selection(int a[],int n);
void printScore(int a[], int n);
main()
{
	int n,score[30],a[30],cnt;
	printf("请输入不超过30人的成绩，输入-1代表结束输入：\n");
	//输入成绩 
	n=readScore(score);
	//排序算法比较
	copy(score,a,n);	 
	printf("用冒泡排序算法，成绩升序排序后的结果为：\n");
	cnt=sort_bubble(a,n);
	printScore(a,n);
	printf("用冒泡排序算法，交换的次数为：%d\n",cnt);
	
	copy(score,a,n);	
	printf("用交换排序算法，成绩升序排序后的结果为：\n");
	cnt=sort_exchange(a,n);
	printScore(a,n);
	printf("用交换排序算法，交换的次数为：%d\n",cnt);

	copy(score,a,n);
	printf("用选择排序算法，成绩升序排序后的结果为：\n");
	cnt=sort_selection(a,n);
	printScore(a,n);
	printf("用选择排序算法，交换的次数为：%d\n",cnt);
 } 
//将成绩转换到a
void  copy(int score[],int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		a[i]=score[i];
	}
}

//冒泡排序法 
int sort_bubble(int a[],int n)
{	int i,j,temp;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>=a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp; 
			}
		}
	}   
	 return i-1;
	
}
//交换排序算法
int sort_exchange(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>=a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp; 
			}
		}
	}
	return i-1;
} 
//选择排序法 
int sort_selection(int a[],int n)
{
	int i,j,temp,k;
	for(i=0;i<n;i++)
	{
		k=i; 
		for(j=k+1;j<n;j++)
		{
			if(a[k]>a[j])
			{
				k=j; 
			}
		}
		if(k!=i)
		{
			a[i]=a[k];	 
		}
	}
	return i-1;
}
//输出排序后的结果
void printScore(int a[], int n)
{
	int j;
	for(j=0;j<n;j++)
	{
		printf("%6d\n",a[j]);
	}	
}
//输入成绩并且确定总数 
int readScore(int score[30])
{
	int j;
	for(j=0;j<=30;j++)
	{
		scanf("%d",&score[j]);
		if(score[j]==-1)
		return j; 
	} 
}

