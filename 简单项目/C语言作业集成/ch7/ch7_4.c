#include <stdio.h>
int Fact(int i);
void ch7_4()
{
	int num1,i,cnt=0;//i����ѭ��  cnt���� 
	//1������׳˵ķ�Χ 
	printf("���ã���ӭ����С���򣡣���\n");
	printf("�����������ֵ��\n");
	scanf("%d",&num1);
	//ѭ���������Ľ׳�
	for(i=1;i<=num1;i++) 
	{
		printf("��%d����%d    ",i,Fact(i)); 
		cnt++;
		//������ʾ�����ʽ�� 
		if(cnt%4==0)
		printf("\n"); 
	} 
}
int Fact(int i)
{
	if(i==1)
	return 1;
	else 
	return i*Fact(i-1);
}
