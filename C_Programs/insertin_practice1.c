#include<stdio.h>
void main()
{
	int a[10],n,i,j,key;
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("\nEnter elements: ");
	
	for(i=0;i<n;i++)
	{
	
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j-=1;
		}
		a[j+ 1]=key;
	}
	printf("\nSorted array is:\n");
	for(i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
}
