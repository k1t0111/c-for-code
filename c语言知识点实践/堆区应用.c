#include  <stdio.h>
#include  <string.h>
void SortString(char *str[], int n);
int main()
{ 
	int    len,i, n; 
	printf("How many countries?");
	scanf("%d",&n);
	getchar();
	char *name[n],s[10],*strp[n]; 
	printf("Input their names:\n");
	for (i=0; i<n; i++)   
	{
		gets(s);
		len=strlen(s)+1;
		name[i]=(char*)malloc(len*sizeof(char));
		strcpy(name[i],s); 
	}
	for(i=0;i<n;i++)
    strp[i]=name[i];
	SortString(strp,n);                    /* �ַ������ֵ�˳������ */
	printf("Sorted results:\n");
	for (i=0; i<n; i++)                     
	puts(name[i]);
	for (i=0; i<n; i++)                     
	puts(strp[i]);/* ���������n���ַ��� */
	for(i=0;i<n;i++)
	free(name[i]); 
	return 0;
}
/* �������ܣ�������ʵ���ַ������ֵ�˳������ */
void SortString(char * str[], int n)
{
	int    i, j;
	char * temp;
	for (i=0; i<n-1; i++)         			
	{
		for(j = i+1; j<n; j++)
		{
			if (strcmp(str[j], str[i]) < 0)     
			{ 
				temp=str[i];        
				str[i]=str[j];
				str[j]=temp;
			}  
		}    
	}  
}
