#include<stdio.h>
void sort(int[],int);
int main()
{
	int a[10],i,size;
	printf("Enter the Array size");
	scanf("%d",&size);
	printf("enter the array elemnets");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,size);
	printf("sorted array is\n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",a[i]);
	}
	
}
void sort(int a[],int size)
{
	int i,j,index,min;
	for(i=0;i<size;i++)
	{
		min=a[i];
		index=i;
		for(j=i+1;j<size;j++)
		{
			if(min>a[j])
			{
				min=a[j];
				index=j;
			}
			
		}
		a[index]=a[i];
		a[i]=min;
	}
	
}
