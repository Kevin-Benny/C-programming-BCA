#include<stdio.h>
#include<stdlib.h>
void merge(int a[],int l,int m, int r);
void mergeSort(int a[],int l,int r);
void print(int A[],int size);
void main()
{ int a[10],i,j,k,c,temp,op,n;
int asize;
  printf("ENTER THE NO. OF ELEMENTS:");
  scanf("%d",&c);
  printf("\n ENTER THE ELEMENTS:");

  for(i=0;i<c;i++)
  {scanf("%d",&a[i]);
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
             for(i=0;i<c;i++)
             {printf("%d \t",a[i]);
              }
              break;
    case 2:
    	     asize= sizeof(a)/sizeof(a[0]);
	        mergeSort(a,0,asize-1);
			printf("\n SORTED ARRAY:\n");
			print(a,c);
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
void mergeSort(int a[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        mergeSort(a, l, m);
        mergeSort(a, m+1, r);
        merge(a, l, m, r);
    }
}

void print(int A[],int n)
{int b;
for(b=0;b<n;b++)
printf("%d \t",A[b]);
}
