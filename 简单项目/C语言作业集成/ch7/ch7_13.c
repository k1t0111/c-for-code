#include <stdio.h>
#include <stdlib.h>
void ch7_13()
{
	srand((int)time(NULL)); 				
	int num1,num2,num3,result,cnt=0;              /*�������ֱ����ʽ cnt���� result������*/
	printf("��ð���С���ѡ���ӭ�����˷��������\nС��ţ��������\n");
	do 
	{
		num1=rand()%10; 	
		num2=rand()%10;
		num3=num1*num2;							   /*���������Ļ�*/
		printf("��һ�⣺%d * %d = ��",num1,num2);
		scanf("%d",&result);
		if(result==num3)						   /*�жϽ��*/
		printf("Right��\n");
		else
		{
			if(cnt==2)
		    {
			    printf("Wrong! You have tried three times! Test over!\n");
				exit(0); 
		    }
			printf("Wrong��please try again��\n");
			cnt++; 
		}  
	} 
	while(result!=num3); 
}  
