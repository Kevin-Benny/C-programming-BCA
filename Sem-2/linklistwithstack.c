#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* link;
};
int main()
{
    struct node* head=NULL;
    struct node* current=NULL;
    struct node* print=NULL;
    struct node* x=NULL;
typedef struct node* NODE;
    int i,ch,n,loop=0,a;
    while(loop==0)
    {
        printf("\n1,2,3,4,5:");
        scanf("%d",&ch);
        switch(ch)
        {

        case 1:
            printf("\nEnter no of values:");
            scanf("%d",&n);
            for(i=0;i<n;i++){
               struct node* x=(struct node*)malloc(sizeof(struct node));
                scanf("%d",&x->data);
                x->link=NULL;
                if(head==NULL){
                    head=x;
                    current=x;
                }
                else
                {
                    current->link=x;
                    current=x;
                }
            }
            print=head;
            break;

        case 2:
            x=(NODE)malloc(sizeof(NODE));
            printf("\nEnter new value in stack");
            scanf("%d",&a);
            x->data=a;
            x->link=head;
            head=x;
            print=head;
            break;
        case 3:
            while(print!=NULL)
            {
                printf("%d ",print->data);
                print=print->link;
            }
            printf("\n");
            break;
        case 4:
            if(head!=NULL){
                x=head;
                head=head->link;
                x->link=NULL;
                free(x);
                printf("poped");
                print=head;
            }
            break;
        case 5:
            loop=1;
        }
    }

}
