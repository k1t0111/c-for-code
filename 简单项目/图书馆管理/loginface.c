#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>
#include <io.h> 
#include <sys/stat.h>
int  return_back=1;                                //声明外部变量返回上一级目录 
int  number=0;                                     //声明外部变量记录人数 
void menu();                                       //函数声明登录界面菜单 
int  Adduser();                                    //函数声明用户注册
int  Entry();                                      //函数声明用户登录
int  Change();                                     //函数声明修改密码
void color(int x);                                 //函数声明修改颜色 
int  countnum();                                   //函数声明查找成员数量 
int  main()
{
	int n;                                         //n服务序号选择 
	while(return_back)
	{
		color(6);                                  //黄色                                  
		printf("\n\n\n\t\t\t\t\t欢迎来到学习以及图书馆管理系统界面！！！\n\n\n\n\n"); 
		menu();
		color(11);                                 //绿色 
		printf("\t\t\t\t\t请选择服务！");
		scanf_s("%d",&n);	
		switch(n)                                  //switch服务选择 
		{
			                                       //注册界面后清屏 
			case 1 :system("cls");return_back=Adduser();system("cls");break; 
			case 2 :          
			system("cls");                         //登陆成功进行页面跳转
			if(return_back=Entry()==1)
			return_back=abilityface(); 
			break;     
			case 3 :exit(0); 
			default:system("cls");
			printf("您的输入有误！"); 
		}
    } 
}
/*函数功能:显示初始界面菜单*/
void menu()
{
	color(9);                                       //灰色 
	printf("    **************\t\t\t\t     ************************************\t\t\t\t**************\n");
	color(15);                                      //淡蓝色 
    printf("          \t *\t\t\t\t\t   注册新账号 请按 1         \t\t\t\t\t*\n");
    printf("          \t *\t\t\t\t\t   登录       请按 2         \t\t\t\t\t*\n");
    printf("          \t *\t\t\t\t\t   退出程序   请按 3         \t\t\t\t\t*\n"); 
    color(9);                                       //灰色 
    printf("    **************\t\t\t\t     ************************************\t\t\t\t**************\n\n\n");	
} 
/*函数功能:注册用户*/
int Adduser()
{
	FILE *fp;                                       //文件类型指针 
	char id[10],passwd[10];                         // id 保存账号  passwd 保存密码 
	int i;                                          //i 用于循环         
	color(2);                                       //绿色 
	printf("\n\n\n\t\t\t\t\t欢迎来到系统注册界面！！\n\n");
	number=countnum();                              //记录人数
	number++; 
	printf("\t\t\t\t\t您是我们的第%d位用户\n",number);
	printf("\t\t\t\t\t您的用户标识号为%d请记住您的用户标号哦！！！\n",number); 
	color(6);                                       //黄色 
	printf("\t\t\t\t\t注册新账号:(不超过八位数字)");
	scanf_s("%s",id);
	printf("\t\t\t\t\t注册新密码:(不超过八位字符)");
	scanf_s("%s",passwd);                           //打开文件准备写入 
	fp=fopen("D:\\idpasswd.txt","a+"); 
	if(fp==NULL)                                    //文件未成功打开处理 
	printf("文件打开失败");
	for(i=0;i<8;i++)                                //将账号写入文档 
	fputc(id[i],fp);
	for(i=0;i<8;i++)
	fputc(passwd[i],fp);                            //将密码写入文档 
	fclose(fp);
	color(2);                                       //绿色 
	printf("\t\t\t\t\t您是第%d位用户，成功注册！！！",number);
	system("PAUSE"); 
	return 1; 
}
/*函数功能:登录用户*/ 
int Entry()
{
	FILE *fp;                                       //文件类型指针 
	char id[10],id1[10],passwd[10],passwd1[10];     // id保存账号id1验证 passwd 密码passwd1验证 
	int i;                                          //i 用于循环       
	color(2);                                       //绿色 
	printf("\n\n\n\t\t\t\t\t欢迎来到系统的登录界面！！\n\n");
	printf("\t\t\t\t\t请输入您的用户标号:");
	scanf_s("%d",&number); 
	color(6);                                       //黄色 
	printf("\t\t\t\t\t请输入您的账号:");
	scanf_s("%s",id);
	printf("\t\t\t\t\t请输入您的密码:");
	scanf_s("%s",passwd);                           //打开文件准备写入 
	fp=fopen("D:\\idpasswd.txt","a+"); 
	if(fp==NULL)                                    //文件未成功打开处理 
	printf("文件打开失败");	
	fseek(fp,(number-1)*16,SEEK_SET);               //文档内容读取位置 
	for(i=0;i<8;i++)                                //将账号读入数组 
	id1[i]=fgetc(fp);
	for(i=0;i<8;i++)
	passwd1[i]=fgetc(fp);                           //将密码读入数组 
	fclose(fp);
    if(strcmp(id,id1)!=0&&strcmp(passwd,passwd1)!=0)
	{
		color(6);                                   //红色 
		printf("您好，您输入的账号密码有错误！请重新输入");
		Sleep(1000);                                 
		system("cls");                              //延迟后清屏 
		Entry(); 
	}
	else
	printf("\n恭喜您！成功登录\n即将自动跳转......");
	Sleep(1000);                                    //延迟后清屏 
	system("cls");
	return 1;  
}
/*函数功能:修改用户密码*/ 
/*int Change()
{  
	char id[10],passwd[10],op;                      //id 保存账号  passwd保存密码 op循环取出字符 
	FILE *fp,*fpw;                                  //fp 保存原始数据 fpw保存修改数据 
	int i;                                          //i 用于循环         
	color(2);                                       //绿色 
	printf("\n\n\n\t\t\t\t\t欢迎来到系统的账号修改界面！！\n\n");
	printf("\t\t\t\t\t请输入您的用户标号:");
	scanf_s("%d",&number); 
	color(6);                                       //黄色 
	printf("\t\t\t\t\t请输入您的新账号:(不超过八位数字)");
	scanf_s("%s",id);
	printf("\t\t\t\t\t请输入您的新密码:(不超过八位字符)");
	scanf_s("%s",passwd);                     
	fp=fopen("D:\\idpasswd.txt","a+");              //打开文件fp   
	fpw=fopen("D:\\idpasswd1.txt","a+");             //打开文件fpw 
	for(i=1;i<=(number-1)*16;i++)
	{
		op=fgetc(fp);                               //将passwd文件数据放在passwd1 
		fputc(op,fpw); 
	}
	for(i=0;i<8;i++)                                //将新账号写入文档 
	fputc(id[i],fpw);
	for(i=0;i<8;i++)
	fputc(passwd[i],fpw);                           //将新密码写入文档 
	fseek(fp,number*16,SEEK_SET);                   //文档数据索引位置改变
	while(1)
	{
		op=fgetc(fp);                               //读取修改数据之后的数据 
		if(op==EOF)                                 //无数据时 跳出循环 
		break; 
		fputc(op,fpw);                              //写入文档 
	}
	fclose(fp);                                     //关闭文档 
	fclose(fpw);
	printf("密码成功修改，即将为您自动跳转"); 
	chmod("D:\\idpasswd",S_IWUSR);
	chmod("D:\\idpasswd1",S_IWUSR); 
	delreplace();                                   //删除文档
	Sleep(5000); 
	return 1; 
}*/
/*函数功能:改变输出文字的颜色*/
void color(int x)
{
	                                                //自定义颜色函数
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
}
/*函数功能:记录用户数量*/
int  countnum()
{
	int cnt=0;                                      //cnt记录个数 
	char op='a';                                    //op保存读出字符 
	FILE *fp;                                       //文件类型指针 
	fp=fopen("D:\\idpasswd.txt","a+"); 
	if(fp==NULL)                                    //文件打开失败管理 
	printf("文件打开失败！");
	while(op!=EOF)                                  //循环读取字符
	{
		op=fgetc(fp);
		cnt++;                                      //cnt逐个加一 
	}
	cnt=(cnt-1)/16;                                 //计算个数 
	return cnt; 
}
