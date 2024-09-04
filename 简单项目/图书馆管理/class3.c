#include <Windows.h> 
#include <stdio.h>
int class3()
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
	printf("艺术类");
	color(3);                                       //湖蓝色 
	printf("    \t\t\t\t\t\t *\n"); 
	printf("\t      *\t\t\t\t\t\t\t\t\t\t\t\t\t       *\n");
	printf("\t\t*************************************************************");
	printf("*****************************************\n\n\n\n\n");
	color(11);                                      //浅绿色 
	printf("\t\t    (1)《美的沉思》\t\t\t\t\t\t\t\t\t    (2)《艺术哲学》\n\n");
	printf("\t\t\t(3)《深泽直入》\t\t\t\t\t\t\t     (4)《观看之道》\n\n"); 
	printf("\t\t\t    (5)《无限的清单》\t\t\t\t\t       (6)《丑的历史》\n\n");
	printf("\t\t\t(7)《达达主义百年史》\t\t\t\t\t\t\t     (8)《神来飞鸟引弦歌》\n\n");
	printf("\t\t\t(9)《万字探微》\t\t\t\t\t\t     (10)《多模态电影分析》\n\n");
	printf("\t\t\t(11)《莎士比亚》\t\t\t\t\t\t\t(12)《神话美学与艺术》\n\n");
	printf("\t\t\t(13)《米开朗琪罗》\t\t\t\t\t\t     (14)《文艺复兴》\n\n");
	printf("\t\t    (15)《美迪奇家族的兴衰》\t\t\t\t\t\t\t\t\t    (16)《艺术的风筝》\n\n");
	printf("\t\t\t    (17)《渴望风流》\t\t\t\t\t       (18)《维米尔的帽子》\n\n");
	printf("\t\t\t(19)《现代艺术》\t\t\t\t\t\t\t     (20)《当代艺术》\n\n");
	color(6);                                        //黄色 
	printf("\t\t\t请选择您要借阅的书籍:");
	scanf("%d",&n); 
	}while(n<1&&n>20); 
	system("cls");                                   //清屏 
	printf("\n\n\n\n\n\t\t\t\t恭喜您借阅成功！！！\n\n\t\t\t\t\t即将为您自动返回图书分类界面....");
	Sleep(3000);                                     //延迟三秒
	return 1; 
}
