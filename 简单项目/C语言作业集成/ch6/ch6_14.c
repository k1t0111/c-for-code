#include <stdio.h>
void ch6_14()
{
	//����������ҹ涨���� 
	int n,man,woman,children,i=1,op;//n������ op�ж��Ƿ���� 
	srand((int)time(NULL));
	do
	{
		 
	printf("����������Ҫ�ļ���");
	scanf("%d",&n); 
	do
	{   	//	����������֣�����100��ש 
		man=rand()%n;
		woman=rand()%n;
		children=rand()%n; 
		if(man*5+woman*3+children*(1.0/3.0)==100&&man+woman+children==n)
		{
			printf("��Ҫ����%d\nĸ��%d\nС��%d\n",man,woman,children);
	  
			break;
          //�ɹ�������			
		}
		
	 }
	 while(i=1); 
	 printf("��Ҫ�����𣿼����Ļ�������1����2\n");
	 scanf("%d",&op); 
	  
	}
	//����ظ�
	while(op=1); 
}
