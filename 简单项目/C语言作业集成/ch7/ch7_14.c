#include <stdio.h>
#include <stdlib.h>
char *fighting();//����ƣ�͹����Ļ� 
char *fail();
void ch7_14() 
{	
	srand((int)time(NULL));
	printf("��ӭ����������ѧ���򣡣���\nС��ţ��������\n"); 
	//(1)��ӡ��������
	int num1,num2,num3,sign,result,cnt,grade,i;/*(1.1)num���ֱ�ʾһ�����ʽ  sign��ʾ��ͬ���ŵĴ��� 
									i����ѭ�� result����Ĵ�  cnt ��¼��ȷ grade �ɼ�*/
	float rate ;//(1.2)��ȷ�� 
	char op;//(1.3)yes or no 
	do
	{
	cnt=0; 
	for(i=1;i<=10;i++)
	{
		num1=rand()%10; 
		num2=rand()%10;
		sign=rand()%5;
		switch(sign)//(1.4)��֧���ѡ������ʽ 
		{
			case 0:
			num3=num1+num2;
			printf("��%d�⣺ %d + %d = ?",i,num1,num2);
			break; 
			case 1:
			num3=num1-num2;
			printf("��%d�⣺ %d - %d = ?",i,num1,num2);
			break;
			case 2:
			num3=num1*num2;
			printf("��%d�⣺ %d * %d = ?",i,num1,num2);
			break;
			case 3:
			num3=num1/num2;
			printf("��%d�⣺ %d / %d = ?",i,num1,num2);
			break;
			case 4:
			num3=num1%num2;
			printf("��%d�⣺ %d %% %d = ?",i,num1,num2);
			break;
		}
		//(2)�ж϶Դ�
		//(3)����Ե���Ŀ
		scanf("%d",&result); 
		if(result==num3)//(2.1)�жϳɼ� 
		{
			printf("%s\n",fighting()); 
			cnt++;
		}
		else
		printf("%s\n",fail());
	}	
	rate=(float)cnt/10.0;//(2.2)�ɼ�����ȷ�� 
	grade=cnt*10;
	printf("���ĳɼ�Ϊ:%d  ������ȷ��Ϊ��%.1f%%\n",grade,rate*100); 
	if(rate<0.75)        //(2.3)��ͬ�����������ϰ 
	printf("���ź���������ȷ��̫����Ҫ���´��أ�\n"); 	
	else
	{
		printf("��ɵķǳ������Ѿ��ɹ�ͨ�أ���Ҫ����һ������(Y��y)��(N��n)");
		scanf(" %c",&op);
	if(op=='n'||'N')
	exit(0); 
	}
	}
	while(rate<0.75||op=='y'||'Y');  
}
//�������ܣ����������Ļ� 
char *fighting()
{
	//(4.1)�����ַ����鱣�������� 
	static char a[4][25]={{"Very good��"},{"Excellent��"},{"Nice work��"},{"keep up the goodwork��"}};
	//(4.2)i���ڱ��������ѡ��
	int i; 
	i=rand()%4;
	switch(i)//(4.3)��֧�������ѡ�� 
	{
		case 0:return a[0];break;
		case 1:return a[1];break;
		case 2:return a[2];break;
		case 3:return a[3];break;
	}	
}
//�������ܣ����ʧ��ʱ��Ļ� 
char *fail()
{
	srand((int)time(NULL)); 
	//(4.4)�����ַ����鱣�������� 
	static char a[4][25]={{"Try again!"},{"Try one more!"},{"no give up!"},{"keep trying!"}};
	//(4.5)i���ڱ��������ѡ��
	int i; 
	i=rand()%4;
	switch(i)//(4.6)��֧�������ѡ�� 
	{
		case 0:return a[0];break;
		case 1:return a[1];break;
		case 2:return a[2];break;
		case 3:return a[3];break;
	}	
}    
