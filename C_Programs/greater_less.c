#include<stdio.h>
void main()
{
  int a,b;
  printf("Enter a number: ");
  scanf("%d",&a);
  printf("Enter another number: ");
  scanf("%d",&b);

  if(a>b)
  {
    printf("%d is greater",a);
  }
  else if(a<b)
  {
    printf("%d is greater",b);
  }
  else
    printf("%d and %d both are equal",a,b);
}  
