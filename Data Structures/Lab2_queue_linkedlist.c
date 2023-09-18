#include <stdio.h>
#include <stdlib.h>
struct node * front = NULL;
struct node * rear = NULL;
int* ptr;
struct node
{
int data;
struct node * next;
};
void enqueue()
{
int ele;
struct node * ptr;
printf("\nEnter the element to enqueue: ");
scanf("%d",&ele);
ptr = (struct node *) malloc(sizeof(struct node));
ptr -> data = ele;
ptr -> next = NULL;
if ((front == NULL) && (rear == NULL))
{
front = rear = ptr;
}
else
{
rear -> next = ptr;
rear = ptr;
}
printf("Enqueue done!\n\n");
}
void dequeue()
{
if(rear==front)
{
printf("\nQueue is empty!");
}
else
{
struct node * temp = front;
int temp_data = front -> data;
front = front -> next;
free(temp);
}
printf("Dequeue done!\n\n");
}
void display()
{
struct node * temp;
if ((front == NULL) && (rear == NULL)) {
printf("\nQueue is Empty\n");
} else {
printf("The queue is \n");
temp = front;
while (temp) {
printf("%d-->", temp -> data);
temp = temp -> next;
}
printf("NULL\n\n");
}
}
int main()
{
int choice;
int y =1;
do
{
printf("\n\n************************QUEUE USING LINKED LIST3********************\n");
printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\nYour choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1: enqueue();
break;
case 2: dequeue();
break;
case 3: display();
break;
case 4: y=0;
break;
}
}while(y==1);
printf("\nSee you later, bye \n");
return 0;
}