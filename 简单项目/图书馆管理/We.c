#include <stdio.h> 
void team1();                                              //团队信息函数声明 
void version();                                            //版本信息函数声明 
int We()
{
	char op;                                               //选择是否退出 
	version();
	team1();
	printf("\t\t退出请输入q哦:");    
    scanf_s(" %c",&op);                                      //输入选择 
	if(op=='q'); 
	return 1; 
}
/*函数功能:版本信息介绍*/ 
void version()                     
{
	color(11);                                             //紫色 
	printf("\n\n\n\n\n\t\t版本：图书学习1.0\n\n\t\t版本状况；最新\n\n\t\t版本运行状况稳定\n\n\n");
}
/*函数功能:团队信息介绍*/
void team1()
{
	printf("\n\t\t团队名称：青穹团队\n\n\t\t团队成员：\n\n\t\t队长：周俊帅\n\n");
    printf("\t\t队员；吴源彬，张佳悦\n\t\t该团队成员拥有个人公众平台，对公众平台的运营有良好的实践经验。\n"); 
    printf("\t\t而且具有较好的编程能力，性格开朗乐观，内心阳光积极向上，爱听歌，跑步等活动\n\n");
    printf("\t\t团队作品：暂无\n\n"); 
    
}
