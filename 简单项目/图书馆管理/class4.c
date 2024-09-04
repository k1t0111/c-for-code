#include <Windows.h> 
#include <stdio.h>
int class4()
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
	printf("文学类");
	color(3);                                       //湖蓝色 
	printf("    \t\t\t\t\t\t *\n"); 
	printf("\t      *\t\t\t\t\t\t\t\t\t\t\t\t\t       *\n");
	printf("\t\t*************************************************************");
	printf("*****************************************\n\n\n\n\n");
	color(11);                                      //浅绿色 
	printf("\t\t    (1)《诗经》\t\t\t\t\t\t\t\t\t    (2)《楚辞》\n\n");
	printf("\t\t\t(3)《古文观止》\t\t\t\t\t\t\t     (4)《聊斋志异》\n\n"); 
	printf("\t\t\t    (5)《儒林外史》\t\t\t\t\t       (6)《阿Q正传》\n\n");
	printf("\t\t\t(7)《雷雨》\t\t\t\t\t\t\t     (8)《围城》\n\n");
	printf("\t\t\t(9)《平凡的世界》\t\t\t\t\t\t     (10)《海怪简史》\n\n");
	printf("\t\t\t(11)《挪威的森林》\t\t\t\t\t\t\t(12)《百年孤独》\n\n");
	printf("\t\t\t(13)《老人与海》\t\t\t\t\t\t     (14)《悲惨世界》\n\n");
	printf("\t\t    (15)《堂吉诃德》\t\t\t\t\t\t\t\t\t    (16)《哈姆雷特》\n\n");
	printf("\t\t\t    (19)《看不见的城市》\t\t\t\t\t       (20)《茶花女》\n\n");
	printf("\t\t\t(17)《古文观止》\t\t\t\t\t\t\t     (18)《我的名字叫红》\n\n");
	color(6);                                        //黄色 
	printf("\t\t\t请选择您要借阅的书籍:");
	scanf("%d",&n); 
	}while(n<1&&n>20); 
	system("cls");                                   //清屏 
	printf("\n\n\n\n\n\t\t\t\t恭喜您借阅成功！！！\n\n\t\t\t\t\t即将为您自动返回图书分类界面....");
	Sleep(3000);                                     //延迟三秒
	return 1; 
}
