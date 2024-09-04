#include <Windows.h> 
#include <stdio.h>
int class2()
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
	printf("哲学类");
	color(3);                                       //湖蓝色 
	printf("    \t\t\t\t\t\t *\n"); 
	printf("\t      *\t\t\t\t\t\t\t\t\t\t\t\t\t       *\n");
	printf("\t\t*************************************************************");
	printf("*****************************************\n\n\n\n\n");
	color(11);                                      //浅绿色 
	printf("\t\t    (1)《沉思录》\t\t\t\t\t\t\t\t\t    (2)《被讨厌的勇气》\n\n");
	printf("\t\t\t(3)《中国哲学简史》\t\t\t\t\t\t\t     (4)《活法》\n\n"); 
	printf("\t\t\t    (5)《人生没什么不可放下》\t\t\t\t\t       (6)《人间值得》\n\n");
	printf("\t\t\t(7)《美的历程》\t\t\t\t\t\t\t     (8)《人生只有一件事》\n\n");
	printf("\t\t\t(9)《理想国》\t\t\t\t\t\t     (10)《哲学研究》\n\n");
	printf("\t\t\t(11)《美学》\t\t\t\t\t\t\t(12)《生命是是什么》\n\n");
	printf("\t\t\t(13)《悲剧的诞生》\t\t\t\t\t\t     (14)《存在与时间》\n\n");
	printf("\t\t    (15)《西方哲学史》\t\t\t\t\t\t\t\t\t    (16)《中国哲学大纲》\n\n");
	printf("\t\t\t    (19)《纯粹理性批判》\t\t\t\t\t       (20)《牛顿研究》\n\n");
	printf("\t\t\t(17)《道德情操论》\t\t\t\t\t\t\t     (18)《小逻辑》\n\n");
	color(6);                                        //黄色 
	printf("\t\t\t请选择您要借阅的书籍:");
	scanf("%d",&n); 
	}while(n<1&&n>20); 
	system("cls");                                   //清屏 
	printf("\n\n\n\n\n\t\t\t\t恭喜您借阅成功！！！\n\n\t\t\t\t\t即将为您自动返回图书分类界面....");
	Sleep(3000);                                     //延迟三秒
	return 1; 
}
