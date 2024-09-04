#include <Windows.h> 
#include <stdio.h>
int class8()
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
	printf("自然科学类");
	color(3);                                       //湖蓝色 
	printf("    \t\t\t\t\t\t *\n"); 
	printf("\t      *\t\t\t\t\t\t\t\t\t\t\t\t\t       *\n");
	printf("\t\t*************************************************************");
	printf("*****************************************\n\n\n\n\n");
	color(11);                                      //浅绿色 
	printf("《自然》\n");
	printf("《大设计》\n");
	printf("《昆虫记》\n");
	printf("《信息简史》\n");
	printf("《星际穿越》\n");
	printf("《平行宇宙》\n");
	printf("《物种起源》\n");
	printf("《万物简史》\n");
	printf("《科学与假设》\n");
	printf("《极简科学史》\n");
	printf("《寂静的春天》\n");
	printf("《看不见的森林》\n");
	printf("《大自然的日历》\n");
	printf("《万物运转的秘密》\n");
	printf("《神秘的量子生命》\n");
	printf("《一只萤火虫的旅行》\n");
	printf("《神奇的人体生物钟》\n");
	printf("《植物知道生命的答案 \n");
	printf("《从混沌到有序:人与自然的新对话》\n");
	printf("《最初的三分钟：关于宇宙起源的现代观点》\n");
	color(6);                                        //黄色 
	printf("\t\t\t请选择您要借阅的书籍:");
	scanf("%d",&n); 
	}while(n<1&&n>20); 
	system("cls");                                   //清屏 
	printf("\n\n\n\n\n\t\t\t\t恭喜您借阅成功！！！\n\n\t\t\t\t\t即将为您自动返回图书分类界面....");
	Sleep(3000);                                     //延迟三秒
	return 1; 
}
