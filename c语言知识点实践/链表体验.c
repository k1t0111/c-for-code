#include <stdio.h>
#include <stdlib.h> 
struct link *addnode(struct link *head);						
void printchart(struct link *head);
struct link *deletenode(struct link *head,int nodedata);
void freechart(struct link *head); 
struct link 							  //���������������� 
{
	int data;
	struct link*next; 
}; 
main()
{
	int nodedata; 
	struct link *head=NULL;                               //����ͷ 
	char op;                                        //�ж� 
	printf("��ӭ���������������򣡣���\n");
	printf("��Ҫ��ӽڵ���?��Ҫ(y��Y)����Ҫ(n��N):");
	scanf(" %c",&op);
	while(op=='y'||op=='Y')
	{
		head=addnode(head);                         //��ӽڵ� 
		printchart(head);                           //��ӡ���� 
		printf("��Ҫ��ӽڵ���?��Ҫ(y��Y)����Ҫ(n��N):");
		scanf(" %c",&op);
	}
	printf("��������Ҫɾ���ڵ������");
	scanf("%d",&nodedata); 
	head=deletenode(head,nodedata);
	printchart(head);
	freechart(head);
	
}
/*�������ܣ���������Ľڵ�*/
struct link *addnode(struct link*head)
{
	int data; 
	struct link *p=NULL,*pr=head;                          //��������ָ�� 
	p=(struct link*)malloc(sizeof(struct link));
	if(p==NULL)										//����Ƿ�Ҫ���ռ� 
	{
		printf("fail������");
		exit(0); 
	} 
	if(head==NULL)									//����Ϊ����� 
	{
		head=p;
		pr=p; 
	} 
	else											//����ǿ�	
	{
		while(pr->next!=NULL)
		{
			pr=pr->next; 
		}
		pr->next=p; 									
		pr=p; 
	} 
	printf("��������������");						//��ӽڵ����� 
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
		printf("����Ϊ�ձ�");
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
		printf("������˼����û�ҵ���\n");
	}
	return head; 
}
