#include<stdio.h>
#include<stdlib.h>

void main()
{
	struct node
	{
		int data;
		struct node *next;
	};
	
	struct node *head=NULL,*pos=NULL,*tail=NULL,*tem,*del;
	
	int ch, entry,c=0,k,t,temp,i,s=0;
	
	while(1)
	{
		printf("\n\n1:Insert\n2:Display\n3:Search\n4:Delete\n5:Exit\n");
		printf("Enter your choice :");
		scanf("%d",&ch);
		
		switch(ch)
		{
			/*Insert an element*/
			case 1:
			{
				printf("Enter data :");
				scanf("%d",&entry);
				if(head==NULL)
				{
					head=(struct node*)malloc(sizeof(struct node));
					head->data=entry;
					pos=head;
					tail=head;
				}
				else
				{
					tail->next=(struct node*)malloc(sizeof(struct node));
					tail=tail->next;
					tail->data=entry;
				}
				s++;
				break;
			}
			
			case 2:
			{
				pos=head;
				if(head==NULL)
				{
					printf("Empty list");
					break;
				}
				printf("\nElements are: ");
				while(pos!=NULL)
				{
					printf("\t%d",pos->data);
					pos=pos->next;
				}
				break;
			}
		
			case 3:
			{
				c=0;
				t=1;
				pos=head;
				if(head==NULL)
				{
					printf("Empty List");
					break;
				}
				printf("Enter data to search: ");
				scanf("%d",&k);
				while(pos!=NULL)
				{	
					c++;
					temp=pos->data;
					pos=pos->next;
					if(temp==k)
					{
						t=0;
						printf("Element is at position %d",c);
						break;
					}
				}
				if(t)
					printf("Element not found");
				break;
			}
			case 4:
			{	
				if(head==NULL)
				{
					printf("Empty List");
					break;
				}
				tem=head;
				printf("Enter postion of data :");
				scanf("%d",&entry);
				if(entry>=s)
				{
					printf("Position out of Range");
					break;
				}
				else if(entry==0)
				{
					head=head->next;
					tem->next=NULL;
					printf("Element deleted is %d",tem->data);
					free(tem);
				}
				else if(entry==s-1)
				{
					for(i=0;i<entry-1;i++)
					{
						tem=tem->next;
					}
					tail=tem;
					tem=tail->next;
					tail->next=NULL;
					printf("Element deleted is %d",tem->data);
					free(tem);
				}
				else
				{
					for(i=0;i<entry-1;i++)
					{
						tem=tem->next;
					}
					del=tem->next;
					tem->next=tem->next->next;
					del->next=NULL;
					printf("Element deleted is %d",del->data);
					free(del);
				}
				s--;
				
				break;
			}
			case 5:
			{
				printf("\n|<----Exiting---->|");
				exit(0);
			}
			
			default :
			{
				printf("Invalid choice");
				break;
			}
		}
	}
}
