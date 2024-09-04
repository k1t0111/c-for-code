#include <Windows.h> 
#include <stdio.h>
int class6()
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
	printf("厉害地理类");
	color(3);                                       //湖蓝色 
	printf("    \t\t\t\t\t\t *\n"); 
	printf("\t      *\t\t\t\t\t\t\t\t\t\t\t\t\t       *\n");
	printf("\t\t*************************************************************");
	printf("*****************************************\n\n\n\n\n");
	color(11);                                      //浅绿色 
	printf("《佛国记》\n");
	printf("《漂海录》\n");
	printf("《山海经》\n");
	printf("《长水集》\n");
	printf("《广志译》\n");
	printf("《南渡北归》\n");
	printf("《水经注疏》\n");
	printf("《百城烟水》\n");
	printf("《布局天下》\n");
	printf("《职方外纪》\n");
	printf("《汉书地理志》\n");
	printf("《交通与交流》\n");
	printf("《南方的意向》\n");
	printf("《地理发现史》\n");
	printf("《徐霞客游记》\n");
	printf("《中国历史地图集》\n");
	printf("《枪炮、病菌与钢铁》\n");
	printf("《希利尔讲世界地理》\n");
	printf("《忙忙碌碌的大运河》\n");
	printf("《历史的空间与空间的历史》\n");
	color(6);                                        //黄色 
	printf("\t\t\t请选择您要借阅的书籍:");
	scanf("%d",&n); 
	}while(n<1&&n>20); 
	system("cls");                                   //清屏 
	printf("\n\n\n\n\n\t\t\t\t恭喜您借阅成功！！！\n\n\t\t\t\t\t即将为您自动返回图书分类界面....");
	Sleep(3000);                                     //延迟三秒
	return 1; 
}
