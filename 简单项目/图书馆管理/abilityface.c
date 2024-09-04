#include <stdio.h>
#include <Windows.h>
int return_back1=1;                                 //全局变量return_back1 用于函数返回 
int abilityface()                                             
{
	while(return_back1)                  
	{
	color(3);                                       //湖蓝色 
	printf("\t\t*************************************************************");
	printf("*****************************************\n");
	printf("\t      *\t\t\t\t\t\t\t\t\t\t\t\t\t       *\n");
	printf("\t    *\t\t\t\t\t\t");
	color(6);                                       //黄色       
	printf("学习及图书馆管理系统");
	color(3);                                       //湖蓝色 
	printf("\t\t\t\t\t\t *\n"); 
	printf("\t      *\t\t\t\t\t\t\t\t\t\t\t\t\t       *\n");
	printf("\t\t*************************************************************");
	printf("*****************************************\n\n\n\n\n");
	color(13);                                      //淡紫色 
	printf("\t\t\t    (一)\t\t\t\t\t\t\t\t    (二)\n");
	color(11);                                      //淡绿色 
	printf("\t\t\t--图书借阅--      \t\t\t\t\t\t\t--座位预定--\n\n\n\n\n");
	color(13);                                      //淡紫色
	printf("\t\t\t\t\t\t\t      (三)\n");
	color(11);                                      //淡绿色
	printf("\t\t\t\t\t\t\t   --学习区--\n\n\n\n\n");
	color(13);                                      //淡紫色 
	printf("\t\t\t\t  (四)\t\t\t\t\t\t\t    (五)\n");
	color(11);                                      //淡绿色 
	printf("\t\t \t     --功能介绍--    \t\t\t\t\t\t--关于我们--\n\n\n\n");
	color(13);                                      //淡紫色 
	printf("\t\t\t\t\t\t\t      (六)\n"); 
	color(11);                                      //浅绿色 
	printf("\t\t\t\t\t\t\t    退出登录\n\n\n"); 
	int option;                                     //option服务序号选择 
	color(6);                                       //黄色 
	printf("\t\t\t--请输入您需要的服务:");
	scanf_s(" %d",&option);
	switch(option)                                  //switch服务选择 
	{
		case 1 :system("cls");return_back1=library();system("cls");break;
		case 2 :system("cls");return_back1=seat();system("cls");break;
		case 3 :break;
													//及时清屏和//返回为1则继续循环  
		case 4 :system("cls");return_back1=ability();system("cls");break;     
		case 5 :system("cls");return_back1=We();     system("cls");break;
		case 6 :system("cls");return 1;             //退出登录 
	}
	}  
} 

