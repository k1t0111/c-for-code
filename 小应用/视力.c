#include <stdio.h>
int main(void)
{
	float E;
	printf("请输入你的小数记录法记录的结果哦！\n"); 
	scanf("%f",&E); 
	printf("您的小数记录为%f\n",E); 
	if(E<=0.12)
	printf("您眼睛度数为550-600度之间哦，已经很高啦!注意保护视力！");
	else
	if(E<=0.15)
	printf("您的眼睛度数为500度，已经很高啦!注意保护视力！");
	else
	if(E<=0.2)
	printf("您的眼睛度数为450度，已经很高啦!注意保护视力！");
	else
	if(E<=0.25)
	printf("您的眼睛度数为400度，已经很高啦!注意保护视力！");
	else
	if(E<=0.3)
	printf("您的眼睛度数为300-350度之间哦，已经很高啦!注意保护视力！");
	else
	if(E<=0.4)
	printf("您的眼睛度数为250，已经近视啦!注意保护视力！"); 
	else
	if(E<=0.5)
	printf("您的眼睛度数为200 已经近视啦!注意保护视力！");
	else
	if(E<=0.6) 
	printf("您的眼睛度数为150 已经近视啦!注意保护视力！");
	else
	if(E<=0.8)
	printf("您的眼睛度数为100度，已经近视啦!注意保护视力！"); 
	else
	printf("您的眼睛非常棒，请保持良好作息哦！");
	
 	 float weight,height,bmi;
	 printf("\n请输入您的体重和身高；");
	 scanf("%f%f",&weight,&height); 
	 bmi=weight/(height*height);
	 printf("您的BMI的值为:%.3f\n",bmi);
	 if(bmi<18.9)
	 printf("亲，向您的体重有点偏瘦哦。多多吃饭哦!");
	 else
	 if(bmi<=23.3) 
	 printf("哇！小可爱的身材太好吧！");
	 else
	 printf("亲，您有点偏重啦！平时请注意体育锻炼哦！");
	  

	
	return 0;
	 
}
