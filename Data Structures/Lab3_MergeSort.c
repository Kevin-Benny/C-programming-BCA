#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#include<ctype.h>
void merge(int a[],int l,int m, int r);
void mergeSort(int a[],int l,int r, int len);
void print(int A[],int size);
void main()
{ 
  int a[10],i,j,k,len,temp,op,n;
  int asize;
  char c;
    bool valid;
    do{
    printf("ENTER THE NO. OF ELEMENTS:");
    fflush(stdin);
    scanf("%c",&c);
    if(isdigit(c))
    {valid = 1;
    len = c - '0';}
    else{
        printf("Invalid Entry, try again\n"); 
        valid = 0;
        }
    }while(valid == 0);
    valid = 0;
    int inttempval;
        for(i=0;i<len;i++)
        {
            do{
                printf("\n ENTER THE %d ELEMENTS:", i);
                fflush(stdin);
                scanf("%c",&c);
                if(isdigit(c))
                {
                    valid = 1;
                    inttempval = c - '0';
                    a[i] = inttempval;
                }
                else{
                    printf("Invalid Entry, try again");
                    valid = 0;
                    }
            }while(valid == 0);
        }

  	char ch='y';
	while(ch=='y')
	{
	    printf("\n\t 1.DISPLAY ELEMENTS \n \t 2.TO SORT THE ELEMENTS \n \t 3.Exit \n ");
		printf("  \n ENTER YOUR CHOICE : ");
	    scanf("%d",&op);
	    switch(op)
		{
		    case 1:
		
		             printf("\n THE ELEMENTS ARE:");
		             print(a,len);
		              break;
		    case 2:
		    	     asize= sizeof(a)/sizeof(a[0]);
			        mergeSort(a,0,asize-1,len);
					printf("\n SORTED ARRAY:\n");
					print(a,len);
					break;
		    case 3:
		        exit(0);
	    }
	    printf("\n do you wish to continue: y/n \n");
		ch=getch();
	}
}

void merge(int a[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = a[l + i];
    for (j = 0; j < n2; j++)
        R[j] = a[m + 1+ j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }

}
void mergeSort(int a[], int l, int r, int len)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        mergeSort(a, l, m, len);
        printf("\n");
        mergeSort(a, m+1, r, len);
        printf("\n");
        merge(a, l, m, r);
        print(a,len);
        printf("\n");
    }
}

void print(int A[],int n)
{	
	int b;
	for(b=0;b<n;b++)
	printf("%d \t",A[b]);
    printf("\n");
}
