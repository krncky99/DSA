#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*start=NULL; 
void create()
{
int ch;
struct node *newnode,*current;
do
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter data part\n");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(start==NULL)
	{
		start=newnode;
		current=newnode;
	}
	else
	{
		current->next=newnode;
		current=newnode;
	}
	printf("enter your choice\n");
	ch=getche();
	
	}while(ch!='n');
}
void display()
{
	struct node *ptr;
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
}
void delete()
{
	struct node *ptr=start;
	while(start!=NULL)
	{
		start=start->next;
		ptr->next=NULL;
		free(ptr);
		ptr=start;
	}
}
void insert_first(int x)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("memory error");
		return;
	}
	newnode->data=x;
	newnode->next=start;
	start=newnode;
}
void insert_last(int x)
{
struct node *newnode,*ptr=start;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("memory error");
		return;
	}
	newnode->data=x;
	newnode->next=NULL;
	if(start=NULL)
	{
		start=newnode;
		return;
	}
	while(ptr->next!=NULL)
	     ptr=ptr->next;
	ptr->next=newnode;
}
	

	

int main()
{
	create();
	display();
	printf("\n\n");
	insert_first(10);

	display();
	printf("\n\n");
	insert_last(20);
	display();
	
	delete();

}
