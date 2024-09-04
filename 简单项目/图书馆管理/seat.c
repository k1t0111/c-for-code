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

// ���˵�
int func_top_menu(int * p_i) 
{
	color(10);                                    //��ɫ  
	puts("\n\n\n\t\t\t*************************************************************");
	color(6);                                    //��ɫ 
	printf("\n\t\t\t\t��ѡ��һ��ͼ��ݷ��䣺\n");
	printf("\n\t\t\t\t\t(a) 100\n");
	printf("\t\t\t\t\t(b) 101\n");
	printf("\t\t\t\t\t(c) 102\n");
	printf("\t\t\t\t\t(d) 103\n");
	printf("\n\n\t\t\t\t\t(q) �˳�\n");
	color(10);                                    //��ɫ
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
			system("cls");                       //���� 
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
			color(10);                                    //��ɫ  
	puts("\n\n\n\t\t\t*************************************************************");
	color(6);                                    //��ɫ 
	printf("\n\t\t\t\t��ѡ��һ��ͼ��ݷ��䣺\n");
	printf("\n\t\t\t\t\t(a) 100\n");
	printf("\t\t\t\t\t(b) 101\n");
	printf("\t\t\t\t\t(c) 102\n");
	printf("\t\t\t\t\t(d) 103\n");
	printf("\n\n\t\t\t\t\t(q) �˳�\n");
	color(10);                                    //��ɫ
	puts("\t\t\t*************************************************************");
	break;
		}
	system("cls");
	color(10);                                    //��ɫ  
	puts("\n\n\n\t\t\t*************************************************************");
	color(6);                                    //��ɫ 
	printf("\n\t\t\t\t��ѡ��һ��ͼ��ݷ��䣺\n");
	printf("\n\t\t\t\t\t(a) 100\n");
	printf("\t\t\t\t\t(b) 101\n");
	printf("\t\t\t\t\t(c) 102\n");
	printf("\t\t\t\t\t(d) 103\n");
	printf("\n\n\t\t\t\t\t(q) �˳�\n");
	color(10);                                    //��ɫ
	puts("\t\t\t*************************************************************");
	}
}

// ���ܲ˵�
int func_menu(char room_number[10])
 {
 	color(10);                                        //��ɫ 
	puts("\n\n\n\t\t\t*************************************************************");
	color(14);                                        //��ɫ 
	printf("\n\t\t\t\troom number: ");
	puts(room_number);
	printf("\t\t\t\tѡ��һ������ \n\n");            
	printf("\t\t\t\t\t(a) ��ʾ����λ��\n");
	printf("\t\t\t\t\t(b) ��ʾ����λ����\n");
	printf("\t\t\t\t\t(c) ����ĸ˳����ʾ��λ��\n");
	printf("\t\t\t\t\t(d) ������λ\n");
	printf("\t\t\t\t\t(e) ɾ����ѡ��λ\n\n");
	printf("\t\t\t\t\t(f) �˳�\n");
	color(10);                                         //��ɫ 
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
			printf("\t\t\t********�������������ѡ��********\n");
			break;
		}
	color(10);                                        //��ɫ 
	puts("\n\n\n\t\t\t*************************************************************");
	color(14);                                        //��ɫ 
	printf("\n\t\t\t\troom number: ");
	puts(room_number);
	printf("\t\t\t\tѡ��һ������ \n\n");            
	printf("\t\t\t\t\t(a) ��ʾ����λ��\n");
	printf("\t\t\t\t\t(b) ��ʾ����λ����\n");
	printf("\t\t\t\t\t(c) ����ĸ˳����ʾ��λ��\n");
	printf("\t\t\t\t\t(d) ������λ\n");
	printf("\t\t\t\t\t(e) ɾ����ѡ��λ\n\n");
	printf("\t\t\t\t\t(f) �˳�\n");
	color(10);                                         //��ɫ 
	puts("\n\n\n\t\t\t*************************************************************");
	}
}

//��ѯ����λ����
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
	printf("\n\n\n\t\t\t����������%d������λ��\n", i_count);
}

//��ʾ����λ�б�
void func_empty_seats_list(void) 
{
	int i,j;
	printf("\n\n\n");                                  //���ֽ������� 
	for ( i = 0,j=0; i < 12; i++)
	{
		if (seats_array[i].u_isreserve == 0)
		{

			color(9);                                  //ǳ��ɫ 
			printf("\t\t    %3u  ��ѡλ��", seats_array[i].u_seats_num);
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

//��ʾȫ����λ�б�
void func_all_seats_list(void) 
{
	int i,j;
	printf("\n\n\n");                                  //���ֽ������� 
	for ( i = 0,j=0; i < 12; i++)
	{
		if (seats_array[i].u_isreserve == 0)
		{
			color(9);                                  //ǳ��ɫ 
			printf("\t\t\t%3u  ��ѡλ��", seats_array[i].u_seats_num);
			j++;
		}
		if (seats_array[i].u_isreserve == 1)
		{
			color(1);                                  //��ɫ
			printf("\t\t\t%3u  ����ѡλ��", seats_array[i].u_seats_num);
			j++;
		}
		if (j == 3)
		{
			printf("\n");
			j = 0;
		}
	};
}
//������λ
void func_assignment_seats(struct library_seats seats_array[12]) {
	unsigned int u_del_num;
	printf("\t\t\t��ѡ������ȥ����λ��(���q���ز˵�): ");
	while (scanf_s("%u", &u_del_num) && u_del_num >= 1 && u_del_num <= 12)
	{
		while (getchar() != '\n')
		{
			continue;
		}
		if (seats_array[u_del_num - 1].u_isreserve == 0)
		{
			seats_array[u_del_num - 1].u_isreserve = 1;
			printf("\t\t\tѡ��ɹ�!\n");
			printf("\t\t\t��ɾ����λ����(���q���ز˵�): ");
			continue;
		}
		printf("\t\t\tѡ��ʧ�ܣ� ��ѡ������ȥ����λ��(���q���ز˵�): ");
	}
	getchar(); //�����ַ�
}

//ɾ����λ
void func_delete_seats(struct library_seats seats_array[12]) {
	unsigned int u_del_num;
	printf("\t\t\t��ɾ����λ����(���q���ز˵�): ");
	while (scanf_s("%u", &u_del_num) && u_del_num >= 1 && u_del_num <= 12)
	{
		while (getchar() != '\n')
		{
			continue;
		}
		if (seats_array[u_del_num - 1].u_isreserve == 1)
		{
			seats_array[u_del_num - 1].u_isreserve = 0;
			printf("\t\t\t��ѡ��λ�ɹ���\n");
			printf("\t\t\t��ɾ����λ����(���q���ز˵�): ");
			continue;
		}
		printf("\t\t\t��λ����Ҫ����ѡ��, ��ɾ����λ����(���q���ز˵�):");
	}
	getchar(); //�����ַ�
}
