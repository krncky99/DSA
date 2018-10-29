#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
};
typedef struct node queue;
queue *f=NULL;
queue *r=NULL;
void insqueue(int);
int delqueue();
void display();
int main()
{
	int ch,item;
	while(1)
	{
		printf("1=insqueue 2=delqueue 3=display 4=exit\n");
		printf("Enter the value : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("enter the item\n");
			        scanf("%d",&item);
			        insqueue(item);
			        break;
			case 2: printf("deleted item is %d\n",delqueue());
			        break;
			case 3: display();
			        break;
			case 4: exit(0);
		}
	}
}
void insqueue(int item)
{
	queue *newnode;
	newnode=(queue*)malloc(sizeof(queue));
	newnode->info=item;
	newnode->next=NULL;
	if(f==NULL)
	{
		f=newnode;
		r=newnode;
	}
	else
	{
		r->next=newnode;
		r=newnode;
	}
}
int delqueue()
{
	int x;
	queue *n;
	if(f==NULL)
	{
	printf("queue underflow\n");
	return 0;
	}
	else
	{
	n=f;
	x=n->info;
	f=n->next;
	free(n);
	return x;
    }
}
void display()
{
	struct node *i;
	for(i=f;i!=NULL;i=i->next)
	printf("%d\n",i->info);
}


