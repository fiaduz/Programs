#include<stdio.h>
void main()
{
	int a[10],i,j,temp,small,n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("\nEnter elements: ");
	
	for(i=0;i<n;i++)
	{
	
		scanf("%d",&a[i]);
	}
	printf("The unsorted array is:\n");
	for(i=0;i<n;i++)
	{
		small=i;
		printf("%d\t",a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if (a[j]<a[small])
			small=j;
			
			}
			if(small!=i)
			{
				temp=a[small];
			a[small]=a[i];
			a[i]=temp;
		}
	}
	printf("\nSorted array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
