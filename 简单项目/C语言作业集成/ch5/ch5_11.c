//ch5_11
#include <stdio.h>
int isleapyear(int year);
void ch5_11()
{
	//�������鱣���·�����// 
	int days[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
	int year,month; 
	//����
	printf("������������ݺ��·�\n");
	scanf("%d%d",&year,&month); 
	printf("������ĵ�����%d\n",days[isleapyear(year)][month-1]);
}
//�ж�����ƽ��
int isleapyear(int year)
{
	if(year%4==0&&year%100!=0)
	return 0;
	else
	return 1; 
}
