#include<stdio.h>
#include<stdlib.h>

struct node {
		int data;
		struct node *next;
	    }; 
	    struct node *top=NULL;

int main()
{
	int ch,entry,tempdata,count=0;
	while(1)
	{
		printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\t");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
			{
				printf("Enter element: ");
				scanf("%d",&entry);
				struct node *input;
				input=(struct node*)malloc(sizeof(struct node));
				input->data=entry;
				if(top==NULL)
				{
					input->next=NULL;
				}
				else
				{
					input->next=top;
				}
				top=input;
				break;
			}
			
			case 2:
			{
				if(top==NULL)
				{
					printf("Underflow\n");
				}
				else
				{
					struct node *temp=top;
					int tempdata =top->data;
					top=top->next;
					free(temp);
					printf("Element Popped");
				}
				
				break;
			}
			case 3:
			{
				if(top==NULL)
				{
					printf("Underflow\n");
				}
				else
				{
					struct node *temp=top;
					while(temp->next!=NULL)
					{	
						printf("%d\t",temp->data);
						temp=temp->next;
					}
					printf("%d",temp->data);
					
					
				}
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
	
