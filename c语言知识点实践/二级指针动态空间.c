#include  <stdio.h>
#include  <string.h>
void SortString(char *str[], int n);
int main()
{ 
	int    i, n; 
	printf("How many countries?");
	scanf("%d",&n);
	getchar(); 
	char *strp[n];
	char **name=(char **)calloc(n,sizeof(char*));
	for(i=0;i<n;i++)
	name[i]=(char *)calloc(10,sizeof(char));
	printf("Input their names:\n");
	for (i=0; i<n; i++)   
	{
		gets(name[i]);                       	/* ����n���ַ��� */ 
	}
	for(i=0;i<n;i++)
    strp[i]=name[i];
	SortString(strp,n);                    /* �ַ������ֵ�˳������ */
	printf("Sorted results:\n");
	for (i=0; i<n; i++)                     
	{		
		puts(name[i]);
	}
	for (i=0; i<n; i++)                     
	{
		puts(strp[i]);/* ���������n���ַ��� */
		
	} 
	 for (i=0; i<n; i++)   
	{
		free(name[i]);                       	/* ����n���ַ��� */ 
	}
	free(name); 
	return 0;
}
/* �������ܣ�������ʵ���ַ������ֵ�˳������ */
void SortString(char * str[], int n)
{
	int    i, j;
	char * temp;
	for (i=0; i<n-1; i++)         			
	{
		for (j = i+1; j<n; j++)
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
