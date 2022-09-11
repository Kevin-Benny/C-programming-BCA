#include<stdio.h>
#include<stdlib.h>
void qs(int no[],int pos,int leng)
{
    int i,j,pivot,t;
    if(pos<leng)
    {
        pivot=pos;
        i=pos;
        j=leng;
        while(i<j)
        {
            while(no[i]<=no[pivot]&&i<=leng)
                i++;
            while(no[j]>no[pivot])
                j--;
            if(i<j)
            {
                t=no[i];
                no[i]=no[j];
                no[j]=t;
            }
        }
        t=no[pivot];
        no[pivot]=no[j];
        no[j]=t;
        qs(no,pos,j-1);
        qs(no,j+1,leng);
    }
}
void main()
{
    int i,c,no[25],op;
    printf("Enter no of elements::");
    scanf("%d",&c);
    printf("Enter Element::\n");
    for(i=0;i<c;i++)
    {
        scanf("%d",&no[i]);
    }
      	char ch='y';
    while(ch=='y')
  {
    printf("\n\t 1.DISPLAY ELEMENTS \n \t 2.STEP BY STEP PROCESS OF SWAPPING \n 3.Exit \n");
	printf("  \n ENTER YOUR CHOICE : ");
    scanf("%d",&op);
    	switch(op)
  {

    case 1:
       for(i=0;i<c;i++)
             {printf("%d \t",no[i]);
              }
    break;

    case 2:
    qs(no,0,c-1);
    printf("\nThe sorted order is:");
    for(i=0;i<c;i++);
    {
        printf("%d\t",no[i]);
    }

	break;
	case 3:
        exit(0);
    break;
    default:
        {
    printf("\n Enter the correct choice");
        }
    printf("\n do you wish to continue: y/n \n");
	ch=getch();
}
  }
}
