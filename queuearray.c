#include <stdio.h>
#include<stdlib.h>

#define n 5

int rear = -1;
int front = -1;

int queue [n];

int isfull()
{
	if (rear == n-1)
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
	if (front == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void enqueue(int val )
{
	if (isfull())
	{
		printf("\n Queue Overflow!");
	}
	else
	{
		if (front == -1)
		{
			front =0;
		}
		rear++;
		queue[rear]=val;
	}
}

void dequeue()
{
	if (isempty())
	{
		printf("\n Queue Underflow!");
	}
	else
	{
		front++;
		if(front>rear)
			front=rear=-1;
	}
}
void display()
{
	int i;
	if (front==-1)
	{
		printf("queue empty!\n");
	}
	else
	{
	
		for(i=front ;i<=rear;i++)
		{
			printf("\n%d\n",queue[i]);
		}
		printf("\n");
	}
}
	

void main()
{
	int ch,val;
	printf("MENU");
	printf("\n1.ENQUEUE  \n2.DEQUEUE \n3.DISPLAY \n4.EXIT\n");
	while(1)
	{
		printf("Enter your choice:{1/2/3/4}:");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1:
				{
					printf("Enter the value to be pushed:");
				      	scanf("%d",&val);
				      	enqueue(val);
				} 
			break;  			
			case 2: 
				{
					dequeue();
				}
				break;
			case 3:
				{
					display();
				}
				break;
			case 4:
				{
					printf("Thankyou !!\n");
					exit(0);
				}
			default:
				printf("Option not found !");
		}
	}
}

