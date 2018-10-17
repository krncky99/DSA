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
int main()
{
	create();
	display();

}
