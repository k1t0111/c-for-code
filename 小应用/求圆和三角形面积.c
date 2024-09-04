#include <stdio.h>
#define PI 3.1415926
#include <math.h>
int main(void) 
{
	int a=10,b=2,c=4,r;
	printf("%d\n",a*=a+=a+a); //900
	printf("%d %d %d\n",a++,a+b+c--,++c); //   901  905   3
	printf("%d",c);
	printf("请输入半径r；\n");
	scanf("%d",&r);
	printf("圆的面积为area=%lf\n",(double)(PI*r*r));
	float e,f,g ,s,area; 
	printf("请输入三角形各条边的长度；");
	scanf("%f %f %f\n",&e,&f,&g);
	s=0.5*(a+b+c);
	printf("您的s为；%f",s);
	area=(float)sqrt(s*(s-e)*(s-f)*(s-g));
	printf("您的三角形面积为；%f",area);
    return 0; 
	
	 
 } 
