#include <stdio.h>
void ch6_3()
{
	//�������
	int F,cnt=0;
	float C; 
	printf("��Ӧ�����£�\n"); 
	//ѭ����Ӧ�����¶� F�����¶� C �����¶� 
	for(F=0;F<=300;F=F+10)
	{
		C=(5.0/9.0)*(F-32);
		printf("%2d==%2f  ",F,C);
		//����һ��
		 
		cnt+=1;
		if(cnt%6==0)
		printf("\n"); 
		 
	 } 
 } 
