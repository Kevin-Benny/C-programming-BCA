#include<stdio.h>
#include<stdlib.h>
int* ptr;
struct Node * head = NULL;
struct Node * rear = NULL;
struct Node
{
  int data;
  struct Node *next;
};

int calcSize (struct Node *node)
{
  int size = 0;

  while (node != NULL)
    {
      node = node->next;
      size++;
    }
  return size;
}

void delete (struct Node **head, int pos) //? **? head stores a pointer to the value that has to be at head 
{
  struct Node *temp = *head;
  struct Node *previous;

  //if the head node itself needs to be deleted
  int size = calcSize (*head);

  if (pos < 1 || pos > size)
    {
      printf ("Enter valid position\n");
      return;
    }

  if (pos == 1)
    {
      *head = temp->next;	//changing head to next in the list
      printf ("Value %d, deleted \n", temp->data);
      free (temp);
      return;
    }

  //run until we find the value to be deleted in the list
  while (--pos)
    {
      //store previous link node as we need to change its next val
      previous = temp;
      temp = temp->next;
    }

  previous->next = temp->next;
  printf ("Value %d, deleted \n", temp->data);

  free (temp);
}

void display (struct Node *node)
{

  //as linked list will end when Node is Null
  while (node != NULL)
    {
      printf ("%d ", node->data);
      node = node->next;
    }
  printf ("\n\n");
}

void enternode(){
  int ele;
  struct Node * ptr;
  printf("\nEnter the element to enqueue: ");
  scanf("%d",&ele);
  ptr = (struct Node *) malloc (sizeof (struct Node));
  ptr -> data = ele;
  ptr -> next = NULL;
  if ((head == NULL) && (rear == NULL))
  {
  head = rear = ptr;
  }
  else
  {
  rear -> next = ptr;
  rear = ptr;
  }
  printf("Enqueue done!\n\n");
}
int main ()
{
int choice, pos;
int y =1;
do
{
  printf("\n\n************************QUEUE USING LINKED LIST3********************\n");
  printf("1.Enter element \n2.Delete\n3.Display\n4.Exit\nYour choice: ");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1: enternode(&head); printf ("Linked List: "); display (head);
    break;

    case 2: 
    printf("\nEnter position to delete: ");
    scanf("%d",&pos);
    delete(&head, pos);
    printf ("Linked List: "); display (head);
    break;

    case 3: printf ("Linked List: "); display (head);
    break;
    case 4:
    y=0;
    break;
  }
}while(y==1);
printf("\nSee you later, bye \n");

  return 0;
}