#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	srand((int)time(NULL)); 
	//1.�����,������λ�� 
	int a,b,c,sum; 
	printf("���ã�����������һ��ħ����Ϸ\n"); 
	printf("����������Ĭ��һ����λ��n");
	printf("���Ҽ�סacb bac bca cab cba����������������ǵĺ�\n");

	for(;;)
{
	//2.���������
	a=rand()%10;
	b=rand()%10;
	c=rand()%10;
	//3�жϲ���� 
	if(a*100+2*a*10+2*a+2*b+2*b*100+2*10+c*100*2+2*10*c+c==1999)
{
	printf("�������������Ϊ%d",a*100+b*10+c);

}	
	 
}
} 



