//program to implement a binary search tree or searching
#include<stdio.h>
#include<stdlib.h>
struct BST
{
	int data;
	struct BST *left,*right;
}*root=NULL;
typedef struct BST node;
node* createNode(data)
{
	node *newnode;
	newnode=(node*)malloc(sizeof(node));
	newnode->data=data;
	newnode->left=newnode->right=NULL;
	return newnode;
}
node* insertNode(node* root,int n)
{
	if(root==NULL)
	{
		root=createNode(n);
	}
	else if(n<=root->data)
	{
		root->left=insertNode(root->left,n);
	}
	else
	{
		root->right=insertNode(root->right,n);
	}
}
int search(node* root,int number)
{
if(root==NULL)
{
	return 0;
}	
else if(number==root->data)
{
    return 1;
}
else if(number<=root->data)
{
	return search(root->left,number);
}
else
{
	return search(root->right,number);
}
}
void display(node* root)
{
	if(root!=NULL)
	{
		display(root->left);
		printf("%d\n",root->data);
		display(root->right);
	}
}

int main()
{
	int n,value,number;
	char ch;
	while(1)
	{
	printf("1=Insert 2=Search 3=Display  4=Exit\n");
	printf("Enter the value\n");
	scanf("%d",&value);
	switch(value)
	{
	case 1:
	printf("Enter your number to be insert : ");
	scanf("%d",&n);
	root=insertNode(root,n);
	break;
	case 2:
	printf("Enter the number\n");
	scanf("%d",&number);
	if(search(root,number)==1)
	printf("Item is found Search is successful\n");
	else
	printf("Item is found Search is successful\n");
	break;
	case 3:
	display(root);
	break;
	case 4:
	exit(0);
	default :printf("Please Enter correct value\n");
	break;
    }
    
}
}
