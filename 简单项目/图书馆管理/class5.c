#include <Windows.h> 
#include <stdio.h>
int class5()
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
	printf("财经管理类");
	color(3);                                       //湖蓝色 
	printf("    \t\t\t\t\t\t *\n"); 
	printf("\t      *\t\t\t\t\t\t\t\t\t\t\t\t\t       *\n");
	printf("\t\t*************************************************************");
	printf("*****************************************\n\n\n\n\n");
	color(11);                                      //浅绿色 
	printf("《领导力》\n");
	printf("《手把手》\n");
        printf("《公司理财》\n");
	printf("《摩根财团》\n");
	printf("《企业管理》\n");
	printf("《让数字说话》\n");
	printf("《发现利润区》\n");
	printf("《原理与方法》\n");
	printf("《魔鬼经济学》\n");
	printf("《涛动周期论》\n");
	printf("《漫步华尔街》\n");
	printf("《资本的秘密》\n");
	printf("《思路决定出路》\n");
	printf("《牛奶可乐经济学》\n");
	printf("《成本控制与管理》\n");
	printf("《深度管理21法则》\n");
	printf("《巴菲特致股东的信》\n");
	printf("《谁说大象不能跳舞》\n");
	printf("《审计学：一种整合方法》\n");
	printf("《世界上最简单的会计书》\n");
	color(6);                                        //黄色 
	printf("\t\t\t请选择您要借阅的书籍:");
	scanf("%d",&n); 
	}while(n<1&&n>20); 
	system("cls");                                   //清屏 
	printf("\n\n\n\n\n\t\t\t\t恭喜您借阅成功！！！\n\n\t\t\t\t\t即将为您自动返回图书分类界面....");
	Sleep(3000);                                     //延迟三秒
	return 1; 
}
