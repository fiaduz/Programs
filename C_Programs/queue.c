#include<stdio.h>
#include<stdlib.h>
#define max 5
int front=0,rear=-1, Q[max];
void nq();
void dq();
void show();
int main()
{
	int ch;
	while(1)
	{
		printf("\n1. Enqueue\n2. Dequeue\n3. Show\n4. Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: nq();
			break;
			case 2: dq();
			break;
			case 3: show();
			break;
			case 4: exit(0);
			break;
			default: printf("\nWrong choice.\n");
		}
	}
	return 0;
}
void nq()
{
	if(rear==max-1)
	{
		printf("\nQueue is full\n");
	}
	else
	{
		int val;
		printf("Enter the value: ");
		scanf("%d",&val);
		rear+=1;
		Q[rear]=val;
		printf("\n%d is successfully inserted.",val);		
	}
}
void dq()
{
	if(front>rear)
	{
		printf("\nUnderflow.\n");
	}
	else
	{
		printf("\n%d is dequeued",Q[front]);
		
		front+=1;		
	}
}
void show()
{
	int i;
	if(rear==-1 || front>rear)
	{
		printf("\nQueue is empty.\n");
	}
	else
	{
		printf("\nThe queue is:\n");
		for(i=front;i<=rear;i++)
		{
			printf("%d\t",Q[i]);
		}
	}
}
