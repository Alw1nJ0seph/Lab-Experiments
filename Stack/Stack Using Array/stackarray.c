#include<stdio.h>
#include<stdlib.h>
#define n 5
int top=-1;
int stack[n];
int isfull()
{
	if(top==n-1)
		return 1;
	else
		return 0;
}
int isempty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}
void push()
{
	if(isfull())
	{
		printf("Overflow");
		exit(0);
	}
	int num;
	printf("Enter element :");
	scanf("%d",&num);
	top++;
	stack[top]=num;
}
void pop()
{	
	printf("Element %d popped",stack[top]);
	top--;
}
void findtop()
{
	printf("%d",stack[top]);
}
void display()
{
	if(isempty())
	{
		printf("Underflow");
		exit(0);
	}
	for(int i=top;i>-1;i--)
	{
		printf("%d ",stack[i]);
		printf("\t");
	}
}
void main()
{
	int ch;
	printf("\n1.PUSH\n2.POP\n3.Display\n4.Exit");
	while(1){
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		{
			push();
			break;
		}
		case 2:
		{	
			pop();
			break;
		}
		case 3:
		{	
			display();
			break;
		}
		case 4:
		{
			exit(0);
		}
		default:
		{
			printf("Invalid Choice");
		}
	}}	
}
