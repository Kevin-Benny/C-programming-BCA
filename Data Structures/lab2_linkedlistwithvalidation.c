#include<stdio.h>
#include<stdlib.h>

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

void delete (struct Node **head, int pos)
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
      //Case 1 head becomes 30
      *head = temp->next;	//changing head to next in the list
      printf ("Value %d, deleted \n", temp->data);

      //case 1: 22 deleted and freed
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


  // Case 2: (24)->next = 16 (as 20->next = 16) 
  // Case 3: (16)->next = NULL (as 12->next = NULL)
  previous->next = temp->next;
  printf ("Value %d, deleted \n", temp->data);

  free (temp);
  //case 2: 20 deleted and freed
  //case 3: 12 deleted and freed
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

void createnode()
{
  //creating 4 pointers of type struct Node
  //So these can point to address of struct type variable
struct Node *ptr[MAX];
for(int i=0;i<6;i++)
{
    *ptr[i]= NULL;
    ptr[i] = (struct Node *) malloc (sizeof (struct Node));
}
struct Node *head = *ptr[0];
}

int enterdata()
{
    int num, i=-1;
    do
    {
    printf("Enter the numbers (0 to stop): ");
    scanf("%lf", &num);
    i++;
    ptr[i]->data = num;		// data set for head node 
    ptr[i]->next = ptr[i+1];
    }while(num != 0);
    ptr[i-1]->next = NULL;
    return 0;

}
int main ()
{
  createnode();
    int choice;
    int y = 1;
    do
    {
    printf("\n\n************************QUEUE USING LINKED LIST3********************\n");
    printf("1.Enter value\n2.Delete\n3.Display\n4.Exit\nYour choice: ");
    scanf("%d",&choice);
    system("clear");
    switch(choice)
    {
    case 1: enterdata(); printf ("Size of the list: %d ", calcSize (&head));
    break;
    case 2: 
    delete (&head, 1);
    delete (&head, 3);
    delete (&head, 4);
    //delete (&head, -2);		// not valid as pos negative
    //delete (&head, 10);		// not valid as breaches size of Linked List
    break;
    case 3: printf ("Linked List: "); display(head);
    break;
    case 4: y=0;
    break;
    }
    }while(y==1);
    printf("\nThank you :)\n");
  return 0;
}