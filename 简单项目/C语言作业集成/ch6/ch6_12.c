#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void ch6_12()
{
	//������� ��ŮС��
	int man,woman,children;
	srand(time(NULL)); 
    for(;;)	
	{
	//������� 
	man=rand()%30;
	woman=rand()%30;
	children=rand()%30;
	if(man*3+woman*2+children==50&&man+woman+children==30)
	break; 
	}
	//�ж� 
 
	printf("��������%6d Ůʿ���� %6d С������ %6d",man,woman,children) ;
}
