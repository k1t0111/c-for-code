#include <stdio.h>
#include <stdlib.h> 
struct link *addnode(struct link *head);						
void printchart(struct link *head);
struct link *deletenode(struct link *head,int nodedata);
void freechart(struct link *head); 
struct link 							  //定义链表类型数据 
{
	int data;
	struct link*next; 
}; 
main()
{
	int nodedata; 
	struct link *head=NULL;                               //主表头 
	char op;                                        //判断 
	printf("欢迎来到链表初体验程序！！！\n");
	printf("需要添加节点吗?需要(y或Y)不需要(n或N):");
	scanf(" %c",&op);
	while(op=='y'||op=='Y')
	{
		head=addnode(head);                         //添加节点 
		printchart(head);                           //打印链表 
		printf("需要添加节点吗?需要(y或Y)不需要(n或N):");
		scanf(" %c",&op);
	}
	printf("请输入您要删除节点的数据");
	scanf("%d",&nodedata); 
	head=deletenode(head,nodedata);
	printchart(head);
	freechart(head);
	
}
/*函数功能：增加链表的节点*/
struct link *addnode(struct link*head)
{
	int data; 
	struct link *p=NULL,*pr=head;                          //定义三个指针 
	p=(struct link*)malloc(sizeof(struct link));
	if(p==NULL)										//检查是否要到空间 
	{
		printf("fail！！！");
		exit(0); 
	} 
	if(head==NULL)									//链表为空情况 
	{
		head=p;
		pr=p; 
	} 
	else											//链表非空	
	{
		while(pr->next!=NULL)
		{
			pr=pr->next; 
		}
		pr->next=p; 									
		pr=p; 
	} 
	printf("请输入您的数据");						//添加节点数据 
	scanf("%d",&data);
	p->data=data; 
	p->next=NULL;
	return head; 
} 
void printchart(struct link *head)
{
	while(head!=NULL)
	{
		printf("%d\n",head->data);
		head=head->next; 
	} 
}
void freechart(struct link *head)
{
	struct link* pr=NULL;
	while(head->next!=NULL)
	{
		pr=head;
		head=head->next;
		free(pr);
	}
}
struct link *deletenode(struct link *head,int nodedata)
{
	struct link *p=head,*pr=head;
	if(head==NULL)
	{
		printf("链表为空表！");
		exit(0); 
	} 
	while(p->data!=nodedata&&p->next!=NULL)
	{
		pr=p;
		p=p->next; 
	}
	if(p->data==nodedata)
	{
		if(p==head)
		{
			head=p->next;
			free(p);
		}
		else
		{
			pr=p->next;
			free(p);
		} 
	}
	else
	{
		printf("不好意思！！没找到！\n");
	}
	return head; 
}
