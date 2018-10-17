//IMPLEMENTATION OF SATCK USING LINKED LIST
#include<stdio.h>
#include<stdlib.h>
void push(int);
int pop();
void display();
struct node
{
	int info;
	struct node *next;
}*top=NULL;
//==================================MAIN FUNTION============================================
int main()
{
	int ch,item;
	while(1)  //infinate loop (if you want to break loop , press 4)
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
		}//END OF SWITCH STATEMENT
	}//END OF WHILE
}//END OF MAIN FUNCTION

//===========================PUSH FUCTION FOR INSERT A VALUE INTO STACK======================
void push(int item)                     
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));   //dynamic memory allocation
	newnode->info=item;
	newnode->next=top;
	top=newnode;
}
//==========================POP FUCTION FOR DELETE A VALUE FROM STACK==========================
int pop()
{
	int x;
	struct node *p;
	if(top==NULL)
	{
		printf("Stack underflow\n");
		return 0;
	}
	else
	{
		p=top;
		x=p->info;
		top=p->next;
		free(p);
		return x;
	}
}
//=============================DISPLAY FUNCTION FOR DISPLAY STACK===============================
void display()
{
	struct node *i;
	printf("Elements of stack are\n");
	for(i=top;i!=NULL;i=i->next)
	printf("%d\n",i->info);
}
