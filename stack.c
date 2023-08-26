#include<stdio.h>
#include<stdlib.h>
#define max 5
int top=-1;
int stack[max];
void push();
void pop();
void disp();

int main()
{
	int ch;
	
	while(1)
	{
		printf("\n1. push\n2.pop\n3.display\n4.exit\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: push();
			break;
			case 2: pop();
			break;
			case 3: disp();
			break;
			case 4: exit(0);
			break;
			default: printf("\nWrong choice.\n");
		}
	}
	return 0;
}
void push()
{
	int val;
	if(top==max-1)
	{
		printf("\n Stack is full.\n");
	}
	else
	{
		printf("\nEnter the value to insert: ");
		scanf("%d",&val);
		top+=1;
		stack[top]=val;
		printf("\n%d is successfully inserted.",val);
	}
}
void pop()
{
	if (top==-1)
	{
		printf("\nUnderflow");
	}
	else
	{
		printf("\n%d is successfully popped.",stack[top]);
		top-=1;
	}
}
void disp()
{
	int i;
	if (top==-1)
	{
		printf("\nStack is empty.");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("\n%d\n",stack[i]);
		}
	}
}
