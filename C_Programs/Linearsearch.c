#include<stdio.h>
void main()
{
    
    int arr[10],n,s,i;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter elements in array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    
    }
    printf("Enter the search element:\n");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(s==arr[i])
    	break;
    }
    if(s==arr[i])
    printf("%d is Found at index %d",s,i);
    
    else
    printf("%d is not found",s);
}
