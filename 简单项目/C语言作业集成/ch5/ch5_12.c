//ch5_12
#include <stdio.h>
void ch5_12()
{
	char sex,sports,diet;
	int faHeight,moHeight,res=0;	 
	
	do 
	{	
	printf("���!\n	����������Ա�(��-M&Ů-F)\n	��������ĸ������(cm)ĸ�����(cm)\n	");
	printf("���������Ƿ�ϲ����������(ϲ��Y-��ϲ��N)\n	���������Ƿ������õ���ʳϰ��(����Y-����N)\n ");
	res=scanf("%c%d%d%c%c",&sex,&faHeight,&moHeight,&sports,&diet);
	fflush(stdin); 
	 } 
	while(res!=5); 	 
	if(sex=='F'&&sports=='Y')
	switch(diet)
	{
		case 'Y': printf("����Ԥ�����Ϊlf\n",((faHeight*0.923+moHeight)/2.0)*(1.0+0.02+0.015));break;
		case 'N': printf("����Ԥ�����Ϊlf\n",((faHeight*0.923+moHeight)/2.0)*(1.0+0.02));break;
		default :printf("�밴��Ҫ�����룬���������д���");
	 }
	 else
	 if(sex=='F'&&sports=='N')
	switch(diet)
	{
		case 'Y': printf("����Ԥ�����Ϊ%lf\n",((faHeight*0.923+moHeight)/2.0)*(1.0+0.015));break;
		case 'N': printf("����Ԥ�����Ϊ%lf\n",(faHeight*0.923+moHeight)/2.0);break;
		default :printf("�밴��Ҫ�����룬���������д���");
		
	 } 
	 else
	 if(sex=='M'&&sports=='Y')
	switch(diet)
	{
		case 'Y': printf("����Ԥ�����Ϊ%lf\n",(faHeight+moHeight)*0.54*(1.0+0.02+0.015));break;
		case 'N': printf("����Ԥ�����Ϊ%lf\n",(faHeight+moHeight)*0.54*(1.0+0.02));break;
		default :printf("�밴��Ҫ�����룬���������д���");	
	}
	 else
	
	switch(diet)
	{
		case 'Y': printf("����Ԥ�����Ϊ%lf\n",(faHeight+moHeight)*0.54*(1.0+0.015));break;
		case 'N': printf("����Ԥ�����Ϊ%lf\n",(faHeight+moHeight)*0.54);break;
		default :printf("�밴��Ҫ�����룬���������д���");
		
	 }
} 
