#include  <stdio.h>
void ch6_15()
{
	//��������Ŀ ��n��������Ŀ
	int ten,five,one,n;
	srand(time(NULL));
	//ȡ��������
	for(n=0;n<50;)
	{
		ten=rand()%50;
		five=rand()%50;
	    one=rand()%50;
	//�ж��Ƿ����Ϊ100 
	if(ten*10+five*5+one==100&&ten+five+one<=50)
	{
		printf("ʮԪ����%4d ��Ԫ����%4d һԪ����%4d һ����%4d\n",ten,five,one,ten+five+one);
		n++;
			
    } 
    } 
    //���������
	printf("һ����%d�ַ���",n); 
} 
