//1����༶����
//2����ɼ�
//3��������������
//4�������������
#include <stdio.h>
int readscore(int sum);
void ch8_2() 
{
	int sum;
	//1����༶����
	printf("���ã���ӭ����С���򣡣���\n");
	printf("�����������ϰ༶����Ŷ��\n");
	scanf("%d",&sum);
	printf("���İ༶����Ϊ:%d\n",sum);
	//2����ɼ�
	//4�������������
	printf("���༶һ����%d������Ŷ����������Ҫ����ඣ�",readscore(sum));		 
}
int readscore(int sum)
{
	int i,score,cnt=0; 
	printf("������ÿ��ѧ���ĳɼ�");
	for(i=0;i<sum;i++)
	{
		scanf("%d",&score);
		//3��������������
		if(score<60)
		cnt++; 
	}
	return cnt; 
} 
