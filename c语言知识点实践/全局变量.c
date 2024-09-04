#include <stdio.h>
int fun(); 
int n=12;
main()
{
{
		int n;
	for(n=1;n<=3;n++)
{
	fun(); 
}
	printf("%d\n",n); 

}
	printf("%d",n);
}

int fun()
{
    static int n=2;  
    n=n*n; 
	printf("%d\n",n); 
		
} 
