#include<stdio.h>
int main()
{
	int a[10],i,j,n;
	printf("Enter the Array size\n");
	scanf("%d",&n);
	printf("Enter the array elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
		
		if(a[j]>a[j+1])
		{
			int temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}}
printf("sorted array is\n");
for(i=0;i<n;i++)
{
	printf("%d\n",a[i]);
}	
return 0;	
}


