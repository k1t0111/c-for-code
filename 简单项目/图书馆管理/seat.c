#include <stdio.h>
#include<stdlib.h>
static unsigned int i_room_numb;
struct library_seats
{
	unsigned int u_seats_num;
	unsigned int u_isreserve;
	char first_name[10];
	char last_name[10];
};
struct library_seats seats_array[12] ={
	{1 , 0 },{2 , 0 },{3 , 0 },{4 , 0 },
	{5 , 0 },{6 , 0 },{7 , 0 },{8 , 0 },
	{9 , 0 },{10 , 0 },{11 , 0 },{12 , 0 },
};

struct library
{
	char *room_number[10];
	struct library_seats;
};

struct library room[4] = {
	{"100",seats_array},{"101",seats_array},
	{"102",seats_array},{"103",seats_array},
};
	
int  func_top_menu(int* p_i);
int  func_menu(char room_number[10]);
void func_empty_seats_quantity(void);
void func_empty_seats_list(void);
void func_all_seats_list(void);
void func_assignment_seats(struct library_seats seats_array[12]);
void func_delete_seats(struct library_seats seats_array[12]);

int seat()
{
	
	func_top_menu(&i_room_numb);
	return 1;
}

// 主菜单
int func_top_menu(int * p_i) 
{
	color(10);                                    //绿色  
	puts("\n\n\n\t\t\t*************************************************************");
	color(6);                                    //黄色 
	printf("\n\t\t\t\t请选择一个图书馆房间：\n");
	printf("\n\t\t\t\t\t(a) 100\n");
	printf("\t\t\t\t\t(b) 101\n");
	printf("\t\t\t\t\t(c) 102\n");
	printf("\t\t\t\t\t(d) 103\n");
	printf("\n\n\t\t\t\t\t(q) 退出\n");
	color(10);                                    //绿色
	puts("\t\t\t*************************************************************");
	char c_chiose;
	while (scanf_s("%c", &c_chiose, sizeof(char)) == 1 && c_chiose != 'q')
	{
		if (c_chiose == '\n')
		{
			continue;
		}
		while (getchar() != '\n')
		{
			continue;
		}
		switch (c_chiose)
		{

		case 'a':
			*p_i = 0;
			system("cls");                       //清屏 
			func_menu(*room[0].room_number);
			break;
		case 'b':
			*p_i = 1;
			system("cls");
			func_menu(*room[1].room_number);
			break;
		case 'c':
			*p_i = 2;
			system("cls");
			func_menu(*room[2].room_number);
			break;
		case 'd':
			*p_i = 3;
			system("cls");
			func_menu(*room[3].room_number);
			break;
		case 'q':return 0;
		default:
			system("cls");
			color(10);                                    //绿色  
	puts("\n\n\n\t\t\t*************************************************************");
	color(6);                                    //黄色 
	printf("\n\t\t\t\t请选择一个图书馆房间：\n");
	printf("\n\t\t\t\t\t(a) 100\n");
	printf("\t\t\t\t\t(b) 101\n");
	printf("\t\t\t\t\t(c) 102\n");
	printf("\t\t\t\t\t(d) 103\n");
	printf("\n\n\t\t\t\t\t(q) 退出\n");
	color(10);                                    //绿色
	puts("\t\t\t*************************************************************");
	break;
		}
	system("cls");
	color(10);                                    //绿色  
	puts("\n\n\n\t\t\t*************************************************************");
	color(6);                                    //黄色 
	printf("\n\t\t\t\t请选择一个图书馆房间：\n");
	printf("\n\t\t\t\t\t(a) 100\n");
	printf("\t\t\t\t\t(b) 101\n");
	printf("\t\t\t\t\t(c) 102\n");
	printf("\t\t\t\t\t(d) 103\n");
	printf("\n\n\t\t\t\t\t(q) 退出\n");
	color(10);                                    //绿色
	puts("\t\t\t*************************************************************");
	}
}

// 功能菜单
int func_menu(char room_number[10])
 {
 	color(10);                                        //绿色 
	puts("\n\n\n\t\t\t*************************************************************");
	color(14);                                        //黄色 
	printf("\n\t\t\t\troom number: ");
	puts(room_number);
	printf("\t\t\t\t选择一个功能 \n\n");            
	printf("\t\t\t\t\t(a) 显示空座位号\n");
	printf("\t\t\t\t\t(b) 显示空座位名单\n");
	printf("\t\t\t\t\t(c) 按字母顺序显示座位号\n");
	printf("\t\t\t\t\t(d) 分配座位\n");
	printf("\t\t\t\t\t(e) 删除所选座位\n\n");
	printf("\t\t\t\t\t(f) 退出\n");
	color(10);                                         //绿色 
	puts("\n\n\n\t\t\t*************************************************************");
	char c_chiose;

	while (scanf_s("%c", &c_chiose, sizeof(char)) == 1)
	{
		if (c_chiose == '\n')
		{
			continue;
		}
		while (getchar() != '\n')
		{
			continue;
		}
		switch (c_chiose)
		{

		case 'a':
			system("cls");
			func_empty_seats_quantity();
			Sleep(2000);
			break;
		case 'b':
			system("cls");
			func_empty_seats_list();
			Sleep(2000);	
			break;
		case 'c':
			system("cls");
			func_all_seats_list();
			Sleep(2000);
			break;
		case 'd':
			system("cls");
			func_assignment_seats(seats_array);
			break;
		case 'e':
			system("cls");
			func_delete_seats(seats_array);
			break;
		case 'f':
			return 0; 
		default:
			printf("\t\t\t********输入错误，请重新选择********\n");
			break;
		}
	color(10);                                        //绿色 
	puts("\n\n\n\t\t\t*************************************************************");
	color(14);                                        //黄色 
	printf("\n\t\t\t\troom number: ");
	puts(room_number);
	printf("\t\t\t\t选择一个功能 \n\n");            
	printf("\t\t\t\t\t(a) 显示空座位号\n");
	printf("\t\t\t\t\t(b) 显示空座位名单\n");
	printf("\t\t\t\t\t(c) 按字母顺序显示座位号\n");
	printf("\t\t\t\t\t(d) 分配座位\n");
	printf("\t\t\t\t\t(e) 删除所选座位\n\n");
	printf("\t\t\t\t\t(f) 退出\n");
	color(10);                                         //绿色 
	puts("\n\n\n\t\t\t*************************************************************");
	}
}

//查询空座位数量
void func_empty_seats_quantity(void) 
{
	int i_count = 0;
	int i;
	for ( i = 0; i < 12; i++)
	{
		if (seats_array[i].u_isreserve == 0)
		{

			i_count++;
		}
	};
	printf("\n\n\n\t\t\t房间现在有%d个空座位。\n", i_count);
}

//显示空座位列表
void func_empty_seats_list(void) 
{
	int i,j;
	printf("\n\n\n");                                  //开局界面三行 
	for ( i = 0,j=0; i < 12; i++)
	{
		if (seats_array[i].u_isreserve == 0)
		{

			color(9);                                  //浅蓝色 
			printf("\t\t    %3u  可选位置", seats_array[i].u_seats_num);
			j++;
		}
		if (j == 4)
		{
			printf("\n");
			j = 0;
		}
	};
	printf("\n");
}

//显示全部座位列表
void func_all_seats_list(void) 
{
	int i,j;
	printf("\n\n\n");                                  //开局界面三行 
	for ( i = 0,j=0; i < 12; i++)
	{
		if (seats_array[i].u_isreserve == 0)
		{
			color(9);                                  //浅蓝色 
			printf("\t\t\t%3u  可选位置", seats_array[i].u_seats_num);
			j++;
		}
		if (seats_array[i].u_isreserve == 1)
		{
			color(1);                                  //蓝色
			printf("\t\t\t%3u  不可选位置", seats_array[i].u_seats_num);
			j++;
		}
		if (j == 3)
		{
			printf("\n");
			j = 0;
		}
	};
}
//分配座位
void func_assignment_seats(struct library_seats seats_array[12]) {
	unsigned int u_del_num;
	printf("\t\t\t请选择你想去的座位号(点击q返回菜单): ");
	while (scanf_s("%u", &u_del_num) && u_del_num >= 1 && u_del_num <= 12)
	{
		while (getchar() != '\n')
		{
			continue;
		}
		if (seats_array[u_del_num - 1].u_isreserve == 0)
		{
			seats_array[u_del_num - 1].u_isreserve = 1;
			printf("\t\t\t选择成功!\n");
			printf("\t\t\t请删除座位号码(点击q返回菜单): ");
			continue;
		}
		printf("\t\t\t选择失败！ 请选择你想去的座位号(点击q返回菜单): ");
	}
	getchar(); //吸收字符
}

//删除座位
void func_delete_seats(struct library_seats seats_array[12]) {
	unsigned int u_del_num;
	printf("\t\t\t请删除座位号码(点击q返回菜单): ");
	while (scanf_s("%u", &u_del_num) && u_del_num >= 1 && u_del_num <= 12)
	{
		while (getchar() != '\n')
		{
			continue;
		}
		if (seats_array[u_del_num - 1].u_isreserve == 1)
		{
			seats_array[u_del_num - 1].u_isreserve = 0;
			printf("\t\t\t重选座位成功！\n");
			printf("\t\t\t请删除座位号码(点击q返回菜单): ");
			continue;
		}
		printf("\t\t\t座位不需要重新选择, 请删除座位号码(点击q返回菜单):");
	}
	getchar(); //吸收字符
}
