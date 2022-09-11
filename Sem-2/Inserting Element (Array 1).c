#include<stdio.h>
void main()
   {
   		int n,i,a[20],item,p,c;
		printf("Enter the size of the array\n");
	    scanf("%d",&n);
		printf("Enter the elements of the array\n");
		for(i=0;i<n;i++)
		{
		    scanf("%d",&a[i]);
		}	
   		printf("Enter the posititon in which you want to enter the element\n");
   		scanf("%d",&p);
   		printf("Enter the element to be inserted\n");
   		scanf("%d",&item);
   		if(p>n)
   		    {
   		       	printf("Invalid position\n");
   		   	}
		else
		    for(i=n-1;i>=p;i--)
		      {
			    	a[i+1]=a[i];
			}
			  a[p]=item;
			  n=n+1;
			  printf("Element inserted\n\n");
			  printf("Elements of the array are\n");
			  for(i=0;i<n;i++)
			    {
				    printf("%d\t",a[i]);
				}	
			        printf("\n\n");
			}
   
   
   
