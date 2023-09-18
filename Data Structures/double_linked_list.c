#include <stdio.h>
#include <stdlib.h>
void display();
  struct Node {
  int data;
  struct Node* prev;
  struct Node* next;
};
int main()
{
  struct Node* head;
  struct Node* first=NULL;
  struct Node* second=NULL;
  struct Node* third=NULL;
  struct Node* fourth=NULL;
  first = (struct Node*)malloc(sizeof(struct Node));
  second = (struct Node*)malloc(sizeof(struct Node));
  third = (struct Node*)malloc(sizeof(struct Node));
  fourth = (struct Node*)malloc(sizeof(struct Node));
  first->data = 10; 
  second->data = 20;
  third->data = 30;
  fourth->data = 40;
          first->next = second;
          first->prev=NULL;
          second->next = third;
          second->prev=first;
  third->next = fourth;
  third->prev=second;
  fourth->next = NULL;
  fourth->prev = third;
  head=first;
  display(first);
  return 0;
}
void display(struct Node* ptr) {
  struct Node* last;
  printf("The doubly linked list elements are:\n");
  while (ptr != NULL) {
    printf("%4d ", ptr->data);
    last = ptr;
    ptr = ptr->next;
  }
}