#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,ch,b,p=0,f=0,flag=0,l=0,m=0,i,j,t=0,r=1;
	while(r==1)
    {
    printf("enter the choice\n1.Linear Search\n2.Linear Search without sentinel\n3.Binary Search\n4.exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
        {
            printf("enter the length of an array:");
            scanf("%d",&n);
            int a[n];
            printf("enter the array\n");
            for(i=0;i<n;i++)
	{
            scanf("%d",&a[i]);
	}
	printf("enter the number to searched:");
	scanf("%d",&b);
			l=a[n-1];
			a[n-1]=b;
			i=0;
			while(a[n-1]!=b)
			i++;
			a[n-1]=l;
			flag=0;
			if( (i<(n-1)) || (b==a[n-1]) )
			{
				flag=1;
				p=i+1;
			}
	}
		break;

     	case 2:
     	    {
    printf("enter the length of an array:");
	scanf("%d",&n);
	int a[n];
	printf("enter the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the number to searched:");
	scanf("%d",&b);
		    for(i=0;i<n;i++)
			{
			    flag=0;
				if((b)==a[i])
				{
					p=i+1;
					flag=1;
					break;
				}
			}
     	    }
     	break;
    	case 3:
    	    {
    printf("enter the length of an array:");
	scanf("%d",&n);
	int a[n];
	printf("enter the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the number to searched:");
	scanf("%d",&b);
	    	for(i=0;i<n;i++)
		        {
		            for(j=i;j<n;j++)
		                {
		  	                if(a[i]>a[j])
		  	                    {
		  		                    t=a[i];
		  		                    a[i]=a[j];
		  		                    a[j]=t;
			                    }
		               }
		        }
		        printf("\n");
		    for(i=0;i<n;i++)
	         	printf("%d \t",a[i]);
	        f=0;
	        l=n-1;
	        while(f<=l)
	        {
                 m=(l+f)/2;
                 flag=0;
                 if (a[m]==b)
	        	{
                    p=m+1;
			        flag=1;
			        break;
	            }
                if (a[m]<b)
                   f=m+1;
                else
                    l=m-1;
	        }
    	    }
	    break;
	    case 4:
            {
                r=0;
                exit(0);
            }
            break;
        default:
            {
                printf("wrong entery");
            }
    }
	if(flag==1)
		printf("\n%dth position\n",p);
    else
    	printf("number not found!");
}
}
