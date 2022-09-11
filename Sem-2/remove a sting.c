
#include<stdio.h>
void main()
   {
   		int n,i,j,l,h,ch,item,p,c,k;
   		char a[20],b[20];
   		do
   		{	
   		printf("1.Entering elements into the array\n2.Deleting an element into the already existing array\n3.Display the edited array\n4.Deleting duplicates\n5.Removing elements\n");
   		printf("\nEnter your choice\n");
   		scanf("%d",&ch);
   		switch(ch)
   			{
   				case 1:
						    {
						    	printf("Enter the size of the array\n");
						        scanf("%d",&n);
						        printf("Enter the elements of the array\n");
						        for(i=0;i<n;i++)
								    {
								    	fflush(stdin);
								    scanf("%c",&a[i]);
								    fflush(stdin);
									}	
								}
   		               break;
   		        case 2:{
   		        	     printf("Enter the posititon of the element you want to delete\n");
   		        	     scanf("%d",&p);
   		        	      if(p>n)
   		        	         {
   		        	         	printf("Invalid position\n");
   		        	         	}
						  else
						      item=a[p];
						      for(i=p;i<n;i++)
							      {
							      	a[i]=a[i+1];
									}
						  n=n-1;
						  printf("Element deleted\n\n");
					    }
					   break;
				case 3:{
					      printf("Elements of the array are\n");
						        for(i=0;i<n;i++)
								    {
								    printf("%c\t",a[i]);
									}	
				           printf("\n\n");
						}
				       break;
				 case 4:
				 	  for(i = 0; i < n; i++)
    
        for(j = i+1; j < n; )
        {
            if(a[j] == a[i])
            {
                for(k=j;k<n;k++)
                {
                    a[k]=a[k+1];
                }
                n--;
            }
            else
            {
                j++;
            }
        }
    
				 	  for(i = 0; i < n; i++)
    {
        printf("\n%c \n", a[i]);
    }
					break;
			case 5:
			{
				printf("Enter the position from where you want to delete: \n");
				scanf("%d\n",&l);
				printf("Enter the position till where you want to delete: \n");
				scanf("%d\n",&h);
				if(l>n&&h>n)
{
	printf("Deletion not possible");
}
              else
              {
              	for(i=0;i<n;i++)
              	{
              		b[i]=a[i];
				  }
				  j=h;
				  for(i=l-1;i<h;i++)
				  {
				  	b[i]=a[j];
				  	j++;
				  }
              	for(i=0;i<n-(h-l+1);i++)
              	{
              		printf("%c\n",b[i]);
				  }
			  }
			
				}
					break;		
				      
				default :printf("Invalid choice\n");   }       
			   
			   printf("Press any key to continue\n");
			   getche(c);
   		       printf("\n\n");
	    }while(c=='y'||'Y');
   }
