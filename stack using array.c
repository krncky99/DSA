#include<stdio.h>
#include<stdlib.h>
int stack[10],top=-1;
void push(int item);
int pop();
void display();
int main()
{
	int ch,item;
	while(1)
	{
		printf("1=push 2=pop 3=display 4=exit\n");
		printf("Enter the value : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("enter the item\n");
			        scanf("%d",&item);
			        push(item);
			        break;
			case 2: printf("deleted item is %d\n",pop());
			        break;
			case 3: display();
			        break;
			case 4: exit(0);
		}
	}
}
void push(int item)
{
	if(top==9)
	printf("Overflow\n");
	else
	{
		top++;
		stack[top]=item;
	}
}
int pop()
{
	int x;
	if(top<0)
	{
		printf("Stack Underflow\n");
		return 0;
	}
	else
	{
		int x;
		x=stack[top];
		top--;
		return x;
	}
}
void display()
{
	int i;
	for(i=top;i>=0;i--)
	{
		printf("%d\n",stack[i]);
	}
}
	

