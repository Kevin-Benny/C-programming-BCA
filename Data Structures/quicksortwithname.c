#include<stdio.h>
#include<string.h>
void qs(int a[25],int f,int l,int n);
void quickSortMain(char items[][10], int count);
void quickSort(char items[][10], int left, int right);
void main()
{ int a[10],i,j,k,c,temp,op,n;
char str[25][10];
  printf("ENTER THE NO. OF ELEMENTS:");
  scanf("%d",&c);
  printf("\n ENTER THE ELEMENTS:");
  
  for(i=0;i<c;i++)
  {scanf("%d",&a[i]);
    
  }
 
  	char ch='y';
    while(ch=='y')
  {
    printf("\n\t 1.DISPLAY ELEMENTS \n \t 2.STEP BY STEP PROCESS OF SWAPPING  \n \t 3. SORT ARRAY OF N NAMES\n");
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
	        qs(a,0,c-1,c);
			printf("THE SORTED ARRAY IS:");
		
			 break;
	case 3:
		     printf("ENTER THE NO OF NAMES:");
		     scanf("%d",&n);
		     printf("ENTER THE NAMES:");
		       for(i=0; i<n; i++) {
             scanf("%s ", &str[i][0]);
  }
              quickSortMain(str, n);
              printf("SORTED NAMES ARE:");
               for(i=0; i<n; i++) {
     printf("%s ", str[i]);
  }
       break;
    printf("\n do you wish to continue: y/n \n");
	ch=getch();
		
	}
}
}


void qs(int a[25],int f,int l,int n)
{
	int i,j,pivot,t,k;
	if(f<l)
	{pivot=f;
	i=f;
	j=l;
	while(i<j)
	{while((a[i]<=a[pivot])&&(i<l))
	i++;
	while(a[j]>a[pivot])
	j--;
	if(i<j)
	{t=a[i];
	a[i]=a[j];
	a[j]=t;

	}
	}
	t=a[pivot];
	a[pivot]=a[j];
	a[j]=t;
		 	for(k=0;k<n;k++)
  {printf("%d \t",a[k]);
  }
   printf("\n");
   
	qs(a,f,j-1,n);
	qs(a,j+1,l,n);
	
	}
}

void quickSortMain(char items[][10], int count)
{
  quickSort(items, 0, count-1);
}

void quickSort(char items[][10], int left, int right)
{
  int i, j;
  char *x;
  char temp[10];

  i = left;
  j = right;
  x = items[(left+right)/2];

  do {
    while((strcmp(items[i],x) < 0) && (i < right)) {
       i++;
    }
    while((strcmp(items[j],x) > 0) && (j > left)) {
        j--;
    }
    if(i <= j) {
      strcpy(temp, items[i]);
      strcpy(items[i], items[j]);
      strcpy(items[j], temp);
      i++;
      j--;
   }
  } while(i <= j);

  if(left < j) {
     quickSort(items, left, j);
  }
  if(i < right) 
     quickSort(items, i, right);
 }
  


