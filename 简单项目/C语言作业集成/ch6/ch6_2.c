#include <stdio.h>
#include <math.h> 
void ch6_2()
{    //���巶Χn 
	int i,n,cnt=0,fps1,fps2;
	printf("���������ķ�Χn\n");
	scanf("%d",&n);
	//ѭ��ƽ������������ӡ 
	for(i=2;i<n;i++)
	{
		fps2=pow(i,3);
		fps1=pow(i,2); 
		printf("(%4d %4d  )",fps1,fps2);
		//ʵ������һ�� 
		cnt+=2;
		if(cnt%10==0)
		printf("\n"); 
	}
 } 
