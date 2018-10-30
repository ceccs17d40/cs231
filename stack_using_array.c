#include<stdio.h>
int stack[100],choice,n=100,top,x,i;
void push()
{
	if(top>=n-1)
	{
		printf("\n\tStack Overflow!");
	}
	else
	{
		printf("Enter value to be pushed:");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}
void pop()
{
	if(top<=-1)
	{
		printf("\n\tStack Underflow!");
	}
	else
	{
		printf("\nPopped Element:%d",stack[top]);
		top--;
	}
	printf("\n");
}
void display()
{
	if(top>=0)
	{
		printf("\nStack Elements:");
		for(i=top;i>=0;--i)
		{
			printf("\n%d",stack[i]);
		}
		printf("\n");
	}
	else
	{
		printf("\nStack is empty!");
	}
}
int main(void)
{
	top=-1;
	do{
		printf("\n\t###STACK###\n1.Push\n2.Pop\n3.Display\n4.Exit");
		printf("\nEnter choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("\nExiting!\n");
				break;
			default:
				printf("\nInvalid Choice!");
		}
	}while(choice!=4);
	return 0;
}
