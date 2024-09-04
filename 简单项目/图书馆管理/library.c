#include <stdio.h>
#include <Windows.h>
int return_back2=1; 
int library()
{
	int option;                                    //服务选择 
    while(return_back2==1)
	{
	color(3);                              //湖蓝色 
	printf("\t\t*************************************************************");
	printf("*****************************************\n");
	printf("\t      *\t\t\t\t\t\t\t\t\t\t\t\t\t       *\n");
	printf("\t    *\t\t\t\t\t\t");
	color(6);                                       //黄色       
	printf("欢迎来到图书预定界面");
	color(3);                                       //湖蓝色 
	printf("\t\t\t\t\t\t *\n"); 
	printf("\t      *\t\t\t\t\t\t\t\t\t\t\t\t\t       *\n");
	printf("\t\t*************************************************************");
	printf("*****************************************\n\n\n\n\n");
	color(14);                                      //淡黄色 
	printf("\t\t\t   (一)\t\t\t\t\t\t\t\t \t   (二)\n");
	color(15);                                      //白色 
	printf("\t\t\t--文学类--      \t\t\t\t\t\t\t--哲学类--\n\n\n\n\n");
	color(14);                                      //淡黄色 
	printf("\t\t\t   (三)\t\t\t\t\t\t\t\t \t   (四)\n"); 
	color(15);                                      //白色 
	printf("\t\t\t--艺术类--      \t\t\t\t\t\t      --文化教育类--\n\n\n\n\n");
	color(14);                                      //淡黄色 
	printf("\t\t\t   (五)\t\t\t\t\t\t\t\t \t   (六)\n");
	color(15);                                      //白色 
	printf("\t\t      --财经管理类--      \t\t\t\t\t\t      --历史地理类--\n\n\n\n\n");
	color(14);                                      //淡黄色 
	printf("\t\t\t   (七)\t\t\t\t\t\t\t\t \t   (八)\n");
	color(15);                                      //白色 
	printf("\t\t      --政治法律类--      \t\t\t\t\t\t      --自然科学类--\n\n\n\n\n");
	printf("\t\t\t退出  请输入  9");
	color(6);                                       //黄色 
	printf("\t\t\t--请输入您需要的图书类别哟:");
	scanf_s("%d",&option);
	switch(option)                                  //switch服务选择 
	{
		case 1 :system("cls");return_back2=class1();system("cls");break;
		case 2 :system("cls");return_back2=class2();system("cls");break;
		case 3 :system("cls");return_back2=class3();system("cls");break;  
		case 4 :system("cls");return_back2=class4();system("cls");break;
		case 5 :system("cls");return_back2=class5();system("cls");break;
		case 6 :system("cls");return_back2=class6();system("cls");break;
		case 7 :system("cls");return_back2=class7();system("cls");break;
		case 8 :system("cls");return_back2=class8();system("cls");break;
		case 9 :return 1; 
	}
	} 
}           
