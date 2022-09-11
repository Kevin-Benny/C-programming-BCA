#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j,n,ans,t,a[10],count;
	char c;
	do
	{
	printf("MENU\n1.Read\n2.Insertion Sort\n3.Display Sorted Array\n4.exit");
	printf("\nEnter your choice\n");
	scanf("%d",&ans);
	switch(ans)
	{
		case 1:printf("Enter the size of the array\n");
		       scanf("%d",&n);
		       printf("Enter the elements\n");
		       for(i=0;i<n;i++)
		       {
		       	scanf("%d",&a[i]);
			   }
			   break;

		case 2:
		for(i=1;i<=n-1;i++)
		{
			j=i;
			while(j>0 && a[j-1]>a[j])
			    {
			    	t=a[j];
			    	a[j]=a[j-1];
			    	a[j-1]=t;
			    	j--;
				}
	}
		printf("\nArray Sorted!!!\n");
		break;
		case 3:printf("The sorted array\n");
		        for(i=0;i<n;i++)
		        {
		        	printf("%d\t",a[i]);
				}
				break;
        case 4:
            exit(0);
		default: printf("Invalid choice\n");
					  }
		printf("Press y to continue\n");
		getche(c);
	    }while(c=='y'||'Y');
		   }

