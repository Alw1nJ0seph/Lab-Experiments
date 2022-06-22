#include<stdio.h>
#include<stdlib.h>

#define size 10

int rear=-1;
int front=-1;
int queue[size];

int isfull()
{
	if(rear==size-1)
		return 1;
	else
		return 0;
}

int isempty()
{
	if(rear==-1)
		return 1;
	else
		return 0;
}

void enqueue(int value)
{
	if(isfull())
		printf("Overflow\n");
	else
	{
		if(front==-1)
			front=0;
		rear++;
		queue[rear]=value;
	}
}

void dequeue()
{
	if(isempty())
		printf("Underflow\n");
	else
	{
		printf("Element Deleted\n");
		front++;
		if(front>rear)
		{
			front=-1;
			rear=-1;
		}
	}
}

void display()
{
	if(isempty())
		printf("Underflow\n");
	else
	{
		int i;
		for(i=front;i<=rear;i++)
		{
			printf("%d\t",queue[i]);
		}
	}
}

void main()
{
	while(1)
	{
		int queue,ch,entry,i;
		printf("\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{	
			case 1:
			{
				printf("Enter element: ");
				scanf("%d",&entry);
				enqueue(entry);
				break;
			}
					
			case 2:
			{
				dequeue();
				break;
			}
			
			case 3:
			{
				display();
				break;
			}
	
			case 4:
			{
				printf("Exiting...\n");
				exit(0);
			}
			
			default:
			{
				printf("\nInvalid Input");
				printf("\n");
				break;
			}
		}
	}
}
