#include <stdio.h>
int hour=11,minute=12,second=0;//ȫ�ֱ��� ʱ���� 
void update();         //�������� 
void delay();
void ch7_16() 
{
	int i ;            //ѭ������
	for(i=0;i<3;i++)
	{
		update();      //����������� 
		printf("%02d:%02d:%02d\n",hour,minute,second);     //����������� 
		delay();       //�ӳ�һ�� 
	} 
} 
/*�������ܣ������ӱ�����*/
void update()
{
	delay();
	second+=3;
	if(second==60)     //������60 
	{
		second=0; 
		minute++; 
	}
	if(minute==60)	  //������60
	{
		minute=0; 
		hour++; 
	}
	if(hour==24)      //ʱ����24
	hour=0; 
}
void delay()
{
	int i;
	for(i=0;i<1000000000;i++)
	{
	}
}
