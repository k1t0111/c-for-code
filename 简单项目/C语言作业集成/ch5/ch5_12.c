//ch5_12
#include <stdio.h>
void ch5_12()
{
	char sex,sports,diet;
	int faHeight,moHeight,res=0;	 
	
	do 
	{	
	printf("你好!\n	请输入你的性别(男-M&女-F)\n	请输入你的父亲身高(cm)母亲身高(cm)\n	");
	printf("请输入你是否喜爱体育锻炼(喜爱Y-不喜爱N)\n	请输入你是否有良好的饮食习惯(良好Y-不好N)\n ");
	res=scanf("%c%d%d%c%c",&sex,&faHeight,&moHeight,&sports,&diet);
	fflush(stdin); 
	 } 
	while(res!=5); 	 
	if(sex=='F'&&sports=='Y')
	switch(diet)
	{
		case 'Y': printf("您的预测身高为lf\n",((faHeight*0.923+moHeight)/2.0)*(1.0+0.02+0.015));break;
		case 'N': printf("您的预测身高为lf\n",((faHeight*0.923+moHeight)/2.0)*(1.0+0.02));break;
		default :printf("请按照要求输入，您的输入有错误");
	 }
	 else
	 if(sex=='F'&&sports=='N')
	switch(diet)
	{
		case 'Y': printf("您的预测身高为%lf\n",((faHeight*0.923+moHeight)/2.0)*(1.0+0.015));break;
		case 'N': printf("您的预测身高为%lf\n",(faHeight*0.923+moHeight)/2.0);break;
		default :printf("请按照要求输入，您的输入有错误");
		
	 } 
	 else
	 if(sex=='M'&&sports=='Y')
	switch(diet)
	{
		case 'Y': printf("您的预测身高为%lf\n",(faHeight+moHeight)*0.54*(1.0+0.02+0.015));break;
		case 'N': printf("您的预测身高为%lf\n",(faHeight+moHeight)*0.54*(1.0+0.02));break;
		default :printf("请按照要求输入，您的输入有错误");	
	}
	 else
	
	switch(diet)
	{
		case 'Y': printf("您的预测身高为%lf\n",(faHeight+moHeight)*0.54*(1.0+0.015));break;
		case 'N': printf("您的预测身高为%lf\n",(faHeight+moHeight)*0.54);break;
		default :printf("请按照要求输入，您的输入有错误");
		
	 }
} 
