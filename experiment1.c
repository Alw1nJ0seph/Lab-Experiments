#include<stdio.h>
#include<stdlib.h>
void main()
{
 struct node
	{
	  int data;
	  struct node *next;
	};
 struct node *head=NULL,*pos=NULL,*tail=NULL;
 int c,ch,entry;
 while(1)
	{
	  printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.SEARCH\n5.EXIT");
	  printf("\n\nEnter your choice:  ");
	  scanf("%d",&ch);
	  switch(ch)
	  {
		case 1: {
			  printf("\nEnter Data:   ");
			  scanf("%d",&entry);
			  if(head == NULL)
				{
					head = (struct node *)malloc(sizeof(struct node));
					head -> data=entry;
					pos = head;
					tail = head;					
				}
			  else
				{
				 	tail -> next=(struct node *)malloc(sizeof(struct node));
					tail = tail -> next;
					tail -> data=entry;	
				}
			}break;
		case 2: {
	  		 struct node *temp =head;
	  		 printf("Enter the position of the data: ");
	  		 scanf("%d",&entry);
	  		 if(entry == 0)
	  		 	{
	  		 	 head=head -> next;
	  		 	 temp -> next = NULL;
	  		 	 free(temp);
	  		 	}
	  		 else
	  		 	{
				 for(int i=0;i<entry-1;i++)
				 	{
				 	 temp=temp -> next;
				 	 struct node *del = temp -> next;
				 	 temp -> next = temp -> next -> next;
				 	 del -> next = NULL;
				 	 free(del);
				 	}	  		 	
	  		 	}
	  		 pos=head;
			  printf("\n Elements are:");
			  while(pos!=NULL)
				{
					printf("\t%d",pos -> data);
					pos=pos -> next;	
				}		
			}break;
		case 3: {
	  		  pos=head;
			  printf("\n Elements are:");
			  while(pos!=NULL)
				{
					printf("\t%d",pos -> data);
					pos=pos -> next;	
				}
			}break;
		case 4: {
			 int search,count=0;
			 printf("Enter the element to be searched :");
				scanf("%d",&search);
				pos=head;
				count=1;
				while(pos!=NULL)
				{
					if(pos->data==search)
					{
						printf("Element Present in Position %d",count);
						break;
					}
					else
					{
						pos=pos->next;
						count++;
					}
				}
				if(pos==NULL)
					printf("Element not found ");
				break;		
			}
		
		case 5: {
			  printf("\n |<--------EXITING-------->|");
			  exit(0);	
			}
	}
       }
}
