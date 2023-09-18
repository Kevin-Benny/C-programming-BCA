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

void delete (struct Node **head, int pos) //? **?
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

void selectionSort()
{
    struct Node *temp = head;
        struct Node *x, *y, *z, *w, *s;
    x = y = head;
    while (y->next) {
        z = w = y->next;
        while (w) {
            if (y->data > w->data) {
                if (y->next == w) {
                    if (y == head) {
                        y->next = w->next;
                        w->next = y;
                        s = y;
                        y = w;
                        w = s;
                        z = w;
                        head = y;
                        w = w->next;
                    }
                    else {
                        y->next = w->next;
                        w->next = y;
                        x->next = w;
                        s = y;
                        y = w;
                        w = s;
                        z = w;
                        w = w->next;
                    }
                }
                else {
                    if (y == head) {
                        s = y->next;
                        y->next = w->next;
                        w->next = s;
                        z->next = y;
                        s = y;
                        y = w;
                        w = s;
                        z = w;
                        w = w->next;
                        head = y;
                    }
                    else {
                        s = y->next;
                        y->next = w->next;
                        w->next = s;
                        z->next = y;
                        x->next = w;
                        s = y;
                        y = w;
                        w = s;
                        z = w;
                        w = w->next;
                    }
                }
            }
            else {
                z = w;
                w = w->next;
            }
        }
        x = y;
        y = y->next;
    }
}
struct Node* swap(struct Node* ptr1, struct Node* ptr2)
{
    struct Node* tmp = ptr2->next;
    ptr2->next = ptr1;
    ptr1->next = tmp;
    return ptr2;
}
int bubbleSort(struct Node** head)
{
  int count = calcSize (*head);
    struct Node** h;
    int i, j, swapped;
 
    for (i = 0; i <= count; i++)
    {
 
        h = head;
        swapped = 0;
 
        for (j = 0; j < count - i - 1; j++)
        {
 
            struct Node* p1 = *h;
            struct Node* p2 = p1->next;
 
            if (p1->data > p2->data)
            {
 
                /* update the link after swapping */
                *h = swap(p1, p2);
                swapped = 1;
            }
 
            h = &(*h)->next;
        }
 
        /* break if the loop ended without any swap */
        if (swapped == 0)
            break;
    }
}

int main ()
{
int choice, pos;
int y =1;
do
{
  printf("\n\n************************QUEUE USING LINKED LIST3********************\n");
  printf("1.Enter element \n2.Delete\n3.Display\n4.selection sort\n5.Bubblesort\n6.Exit\nYour choice: ");
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

    case 4: selectionSort(); printf ("Linked List after sorting: ");  display (head);
    break;
    case 5:
    bubbleSort(&head); printf ("Linked List after sorting: ");  display (head);
    break;
    case 6:
    y=0;
    break;
  }
}while(y==1);
printf("\nSee you later, bye \n");

  return 0;
}