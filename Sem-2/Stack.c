#include <stdio.h>
#include <stdlib.h>
//#include "StackOperationsLL.c"

int main() {
	int op, x;
	while(1) {
		printf("1.Push 2.Pop 3.Display 4.Is Empty 5.Peek 6.Exit\n");
		printf("Enter your option : ");
		scanf("%d", &op);
		switch(op) {
			case 1:
				printf("Enter element : ");
				scanf("%d", &x);
				push(x);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				isEmpty();
				break;
			case 5:
				peek();
				break;
			case 6:
				exit(0);
		}
	}
}

//File Name: StackOperationsLL.c
//==================================
struct Node
{
	int data;
	struct Node* next;

};
typedef struct Node* NODE;
NODE top=NULL;
void push(int x)
{
	NODE temp;
	temp=(NODE)malloc(sizeof(struct Node));
	temp->data=x;
	temp->next=top;
	top=temp;
	printf("Successfully pushed.\n");
}
void pop()
{
	NODE temp;
	if(top==NULL)
	printf("Stack is underflow.\n");
	else
	{
		temp=top;
		top=top->next;
		temp->next=NULL;
		printf("Popped value = %d\n",temp->data);
		free(temp);

	}
}
void display()
{
	NODE x;
	if(top==NULL)
	printf("Stack is empty.\n");
	else
	{
		x=top;
		printf("Elements of the stack are : ");
		while(x!=NULL)
		{
			printf("%d ",x->data);
			x=x->next;
		}

		printf("\n");
	}
}
void isEmpty()
{
	if(top==NULL)
	printf("Stack is empty.\n");
	else
	printf("Stack is not empty.\n");
}
void peek()
{
	if(top==NULL)
	printf("Stack is underflow.\n");
	else
	printf("Peek value = %d\n",top->data);
}
