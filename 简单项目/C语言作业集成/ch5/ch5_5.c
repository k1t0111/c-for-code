//ch5_5
#include <stdio.h>
#include <math.h>
void ch5_5()
{
	int capital,n;
	double deposit; 
	printf("��������Ҫ����ı���ʹ���ڣ�\n");
	scanf("%d\n%d\n",&capital,&n);
	switch(n)
	{
		case 1:
	deposit=capital*pow(1.0225,n);
	printf("���ı���Ϊ��%lf\n",deposit);
	break; 
	    case 2:
	deposit=capital*pow(1.0243,n);
	printf("���ı���Ϊ��%lf\n",deposit);
	break;
	    case 3:
	deposit=capital*pow(1.0270,n);
	printf("���ı���Ϊ��%lf\n",deposit);
	break; 
	    case 5:
	deposit=capital*pow(1.0288,n);
	printf("���ı���Ϊ��%lf\n",deposit);
	break;
	    case 8:
	deposit=capital*pow(1.0300,n);
	printf("���ı���Ϊ��%lf\n",deposit);
	break;
	default : printf("�����������");
	} 
 } 
