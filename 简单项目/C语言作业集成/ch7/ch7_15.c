#include <stdio.h>
#include <stdlib.h>
//声明排序函数 
void Sortfactor(int factor[],int cnt);
//声明寻找因数函数 
int Findfactor(int factor[],int num);
//生命判断素数函数
int isprime2(int num); 
void ch7_15() 
{
	/*(1)输入一个整数*/
	int i,num,judge,factor[20]={0},cnt;/*num表示整数  judge 判断素数 factor表示因数 
						i循环控制输出   cnt 因数个数*/
	printf("您好！请输入一个整数:");
	scanf_s("%d",&num); 
	//(2)判断素数
	judge=isprime2(num);
	if(judge)//逻辑数字转换判断 
	{
		printf("It is a prime !");
	}
	else
	//(3)判断因数
	{
		printf("It isn't a prime!\n");
		cnt=Findfactor(factor,num);
		//(4)因数排序 
	    Sortfactor(factor,cnt);
		//(5)输出乘积 
		printf("您输入的整数的因数集合为:%d：",num);
		for(i=0;i<cnt;i++)
	{
		if(i==cnt-1)
		printf("%d\n",factor[i]);
		else 
		printf("%d,",factor[i]); 
	} 
	}  
} 
/*函数功能：对因数从小到大进行排序*/
void Sortfactor(int factor[],int cnt)
{
	int i,j,lemp;//i j 用于交换法控制循环 lemp 用于数字交换 
	for(i=0;i<cnt-1;i++)
	{
		for(j=i+1;j<cnt;j++)
		{
			if(factor[i]>factor[j]) 
			{
				lemp=factor[i];
				factor[i]=factor[j];
				factor[j]=lemp; 
			}
		} 
	} 
}
/*函数功能：寻找一个整数的所有因数*/
int Findfactor(int factor[],int num)
{
	int i,cnt=0;//i穷举找因数 cnt 因数个数 
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			//判断因数并且记数 
			factor[cnt]=i;
			cnt++; 
		}
	}
	return cnt; 
}
/*函数功能：判断是否为素数*/
int isprime2(int num)
{
	int i;//i判断穷举因数
	for(i=2;i<num;i++)
	{
		//判断是否能够整除 
		if(num%i==0)
		break; 
	} 
	if(i==num)
	return 1;
	else
	return 0; 
}
