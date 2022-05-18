#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i=0 ;
	int a;
	int flag=0;
	struct node 
	{
		int data ;
		struct node *next ;
	};
	struct node *head=NULL,*pos=NULL,*tail=NULL;
	
	int ch ,entry;
	while(1)
	{
		printf("\n1. INSERT  \n2. DISPLAY  \n3.COUNT  \n4. SEARCH  \n5.EXIT\n");
		printf("Enter your choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\n Enter data:");
				scanf("%d",&entry);
				
				if (head==NULL)
				{
					head=(struct node *)malloc(sizeof(struct node));
					
					head -> data =entry;
					pos=head;
					tail=head;
				}
				else
				{
					tail -> next = (struct node *)malloc(sizeof (struct node ));
					tail = tail -> next;
					tail -> data =entry ;
				}
				break;
			case 2:
				pos = head;
				printf("\nElements are :");
				while (pos !=NULL)
				{
					printf("\t%d",pos -> data);
					pos =pos  -> next;
				}
				printf("\n");
				break;
			case 3:
				pos = head ;
				printf("\nThe number of elements are:\n");
				while(pos != NULL)
				{
					i=i+1;
					pos=pos -> next;
				}
				printf("%d",i);
				printf("\n");
				break;
			case 4:
				pos = head ;
				printf("\n Enter the number you have to search :");
				scanf("%d",&a);
				while(pos != NULL)
				{
					if (pos ->data == a)
					{
						flag+=1;
						pos =pos -> next;
					}
					else
					{
						pos =pos -> next;
					}
				}
				if (flag ==1)
				{
					printf(" The element is present in the list.\n ");
				}
				else
				{
					printf("The element is not present in the list.\n");
				}
				break;
			case 5:
				printf("\nThankyou !\n");
				exit(0);
			}
		}
}	
