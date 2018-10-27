#include<stdio.h>
#include<stdlib.h>
int queue[10];
int front=-1;
int rear=-1;
void insert(int);
int delete();
void display();
int main()
{
	int ch,item;
	while(1)
	{
		printf("1=Insert 2=delete 3=display 4=exit\n");
		printf("Enter the value : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("enter the item\n");
			        scanf("%d",&item);
			        insert(item);
			        break;
			case 2: printf("deleted item is %d\n",delete());
			        break;
			case 3: display();
			        break;
			case 4: exit(0);
		}
	}
}
void insert(int item)
{
	if(rear==9)
	{
		printf("Queue Overflow\n");
	}
	else if(front<0)
	{
		front++;
		rear++;
		queue[rear]=item;
	}
	else
	{
		rear++;
		queue[rear]=item;
	}
}
int delete()
{
	int x;
	if(front<0)
	{
		printf("Underflow\n");
		return 0;
	}
	else if(front==rear)
	{
		x=queue[front];
		front=-1;
		rear=-1;
		return x;
	}
	else
	{
		x=queue[front];
		front++;
		return x;
	}
}
void display()
{
	int i;
	for(i=front;i<=rear;i++)
	printf("queue[%d] is %d\n",i,queue[i]);
}





