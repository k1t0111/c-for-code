#include <stdio.h>
struct number
{
	/*�ṹ�� ÿ��ѡ����Ϣ*/
	char name[8];//���� �Ա� ���� ��� �ɼ� 
	char sex[4];
	int old; 
	int sort;
	int score[6];
	float average; 
};
void intscore(struct number NUMBER[],int judge,int num);//������ί��� 
void Findnum(struct number NUMBER[],int judge,int num);//�����Сֵ��ƽ���� 
void Sortnum(struct number NUMBER[],int judge,int num);//ѡ������ 
void putnumber(struct number NUMBER[],int num);//��������˳�� 
void ch8_7() 
{
	/*(1)������ί���� ѡ������*/
	int judge,num;//(1.1)judge ��ί�� num ѡ���� 
	struct number NUMBER[10];//(1.2)ѡ����Ϣ
	char op; 
	do
	{
	printf("��ӭ��������ϵͳ����������ί��(<6)��ѡ����(<10):\n");
	scanf("%d %d",&judge,&num);
	getchar();   //(1.3)ȥ���س� 
	/*(2)¼��ѡ����Ϣ*/ 
	intscore(NUMBER,judge,num);
	/*(3)ÿ��ѡ�ֵ���ͺ���߷ֺ�ƽ����*/
	Findnum(NUMBER,judge,num);
	/*(4)ѡ������*/
	Sortnum(NUMBER,judge,num);
	/*(5)���ѡ����Ϣ*/
	putnumber(NUMBER,num);
	printf("���Ƿ���Ҫ�ٴ�����?��(y��Y)��(n��N)");
	scanf(" %c",&op);
	}
	while(op=='Y'||op=='y'); 
} 
/*�������ܣ�������ί��ֳɼ���ѡ�ֻ�����Ϣ*/
void intscore(struct number NUMBER[],int judge,int num)
{
	int i,j;//(2.1)i����ѡ������ѭ�� j ������ί����ѭ�� 
	for(i=0;i<num;i++)
	{
		//�������� �Ա� ���� ��� 
		printf("��%dλ��\n������",i+1);
		scanf("%s",NUMBER[i].name);
		printf("\n�Ա�:"); 
		scanf("%s",&NUMBER[i].sex);
		printf("\n����:");
		scanf("%d",&NUMBER[i].old);
		printf("\n���:");
		scanf("%d",&NUMBER[i].sort);
		printf("\n"); 
		for(j=0;j<judge;j++)
		{
			//���������ί��ѧԱ��� 
			printf("��%dλ��ί����:",j+1); 
			scanf("%d",&NUMBER[i].score[j]);
			printf("\n");
		} 
	} 
}
/*�������ܣ���ÿ��ѧԱ��ƽ��ֵ*/
void Findnum(struct number NUMBER[],int judge,int num)
{
	int i,j,max[10],min[10],sum[10];/*(3.1)�������ѡ�ֵ����ֵ����Сֵ
							iѡ��ѭ�� j��ίѭ��
							sumÿ��ѧԱ����ܺ�*/
	for(i=0;i<num;i++)
	{
		//(3.2)���޷�����ֵ 
		max[i]=0;
		min[i]=10;
		for(j=0;j<judge;j++)
		{
			//(3.3)���޷��������Сֵ 
			if(NUMBER[i].score[j]>max[i])
			max[i]=NUMBER[i].score[j];
			if(NUMBER[i].score[j]<min[i])
			min[i]=NUMBER[i].score[j];
		} 
	}
	//(3.4)��ѧԱƽ��ֵ
	for(i=0;i<num;i++)
	{
		sum[i]=0; 
		for(j=0;j<judge;j++)
		{
			//(3.5)ÿ��ѧԱ�ķ����ܺ� 
			sum[i]+=NUMBER[i].score[j]; 
		}
		//(3.6)ȥ�������Сֵ 
		sum[i]=sum[i]-max[i]-min[i];
		NUMBER[i].average=(float)sum[i]/(float)(judge-2);
	} 
}
/*�������ܣ�ѧԱ�ɼ�����*/
void Sortnum(struct number NUMBER[],int judge,int num)
{
	int d,i,j;//d ѡ�����򷨲��� iѡ��ѭ�� j ��ί����ѭ�� 
	struct number lemp[10];//(4.1)���������ò��� 
	for(i=0;i<num;i++)
	{
		d=i;
		for(j=i+1;j<num;j++)
		{
			//(4.2)ѡ�񽻻��� ��¼����±� 
			if(NUMBER[d].average<NUMBER[j].average)
			d=j;
		} 
		//(4.3)ѡ�񽻻��� ���� 
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
	int i;//(5.1)i ����ѭ��
	//(5.2)������沼�� 
	printf("����ѧԱ��ֺ�ɼ�����Ϊ:\n");
	printf("����     �Ա�   ����  ���  ƽ���� \n");
	//ѭ������������ 
	for(i=0;i<num;i++) 
	{
		printf("%-10s%-6s%-6d%-6d%-8f\n"
		,NUMBER[i].name,NUMBER[i].sex,NUMBER[i].old,
		NUMBER[i].sort,NUMBER[i].average); 
	}
}
