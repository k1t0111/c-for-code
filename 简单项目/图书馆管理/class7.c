#include <Windows.h> 
#include <stdio.h>
int class7()
{
	int n;                                          //保存选择 
	do 
	{
	color(3);                                       //湖蓝色 
	printf("\t\t*************************************************************");
	printf("*****************************************\n");
	printf("\t      *\t\t\t\t\t\t\t\t\t\t\t\t\t       *\n");
	printf("\t    *\t\t\t\t\t\t\t");
	color(6);                                       //黄色       
	printf("政治法律类");
	color(3);                                       //湖蓝色 
	printf("    \t\t\t\t\t\t *\n"); 
	printf("\t      *\t\t\t\t\t\t\t\t\t\t\t\t\t       *\n");
	printf("\t\t*************************************************************");
	printf("*****************************************\n\n\n\n\n");
	color(11);                                      //浅绿色 
	printf("《常识》\n");
	printf("《君主论》\n");
	printf("《政府论》\n");
	printf("《爱弥儿》\n");
	printf("《法的门前》\n");
	printf("《法律之门》\n");
	printf("《洞穴奇案》\n");
	printf("《政治论证》\n");
	printf("《人口原理》\n");
	printf("《送法下乡》\n");
	printf("《社会契约论》\n");
	printf("《世界是通的》\n");
        printf("《刑法的私塾》\n");
	printf("《辩护的政治》\n");
	printf("《联邦党人文集》\n");
	printf("《告别政治义务》\n");
	printf("《经济发展理论》\n");
	printf("《自然权利的遗产》\n");
	printf("《旧制度与大革命》\n");
	printf("《公正：该如何是好》\n");
	color(6);                                        //黄色 
	printf("\t\t\t请选择您要借阅的书籍:");
	scanf("%d",&n); 
	}while(n<1&&n>20); 
	system("cls");                                   //清屏 
	printf("\n\n\n\n\n\t\t\t\t恭喜您借阅成功！！！\n\n\t\t\t\t\t即将为您自动返回图书分类界面....");
	Sleep(3000);                                     //延迟三秒
	return 1; 
}
