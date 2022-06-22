#include<stdio.h>
#include<stdlib.h>

struct node {
		int data;
		struct node *next;
	    }; 
		struct node *front=NULL; struct node *rear=NULL;

void enqueue(int value)
{
   struct node *input;
   input=(struct node*)malloc(sizeof(struct node));
   input->data=value;
   input->next=NULL;
   if(front==NULL)
      front=rear=input;
   else
   {
      rear->next=input;
      rear=input;
   }
 }

void dequeue()
{
   if(front==NULL)
		printf("Underflow\n");
   else
   {
      struct node *del=front;
      front=front->next;
      printf("Element Deleted");
      free(del);
   }
}

void display()
{
  if(front==NULL)
		printf("Underflow\n");
   else
   {
      struct node *temp=front;
      while(temp->next!=NULL)
      {
	 	printf("%d\n",temp->data);
	 	temp=temp->next;
      }
      printf("%d\n",temp->data);
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
				break;
			}
		}
	}
}
