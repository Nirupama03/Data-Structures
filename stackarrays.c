// Program to create a stack using arrays 

#include <stdio.h>
#include <stdlib.h>

#define n 5

int top=-1;
int stack[n];

int isfull()
{
	if(top==n-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isempty()
{
	if (top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


void push(int a)
{
	if(isfull())
	{
		printf("\n Stack Overflow!!\n");
	}
	else
	{
		top++;
		stack[top]=a;
		printf("\n%d  Pushed into the stack\n",stack[top]);
	}
}

void pop()
{
	if (isempty())
	{
		printf("\n Stack Underflow!\n");
	}
	else
	{
		printf("\n %d popped from the list\n",stack[top]);
		stack[top]=-1;
		top--;
	}
}

void findtop()
{
	printf("\nTop Position %d\n",top);
	printf("\nTop value %d\n",stack[top]);
}

void display ()
{
	int i,x;
	x=top;
	if (top==-1)
	{
		printf("stack empty!\n");
	}
	else
	{
	
		for(i=x;i>=0;i--)
		{
			printf("\n%d\n",stack[i]);
		}
		printf("\n");
	}
}
void main()
{
	int ch,val;
	printf("MENU");
	printf("\n1.PUSH \n2.POP \n3.DISPLAY \n4.FIND TOP \n5.EXIT\n");
	while(1)
	{
		printf("Enter your choice:{1/2/3/4/5}:");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1:
				{
					printf("Enter the value to be pushed:");
				      	scanf("%d",&val);
				      	push(val);
				} 
			break;  			
			case 2: 
				{
					pop();
				}
				break;
			case 3:
				{
					display();
				}
				break;
			case 4:
				{
					findtop();
					break;
				}
			case 5:
				{
					printf("Thankyou !!\n");
					exit(0);
				}
			default:
				printf("Option not found !");
		}
	}
}
