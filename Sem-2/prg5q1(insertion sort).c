#include<stdio.h>
void swap();
int main()
{

	int n,i,j,temp,a[100],k,ch,count;
	char c;
	do
	{

	printf("Enter the no of array elements : ");
	scanf("%d",&n);
	printf("Enter the elements to be sorted \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}


	printf("\n");
	printf("1.Insertion sort\n");
	printf("2.Exit\n");
	printf("Enter your choice\n");
	scanf("%d",&ch);
	printf("\n");
	switch(ch)
	{

case 1 :
				 	for(i=1;i<n;i++)
				{ //count++;
					k=a[i];
					j=i-1;
					while(j>=0 && a[j]>=k)
					{ count++;
						a[j+1]=a[j];
						j--;

					}
					a[j+1]=k;
					printf("\n");
					for(j=0;j<n;j++)
					{
						printf("%d\t",a[j]);
					}
				//	printf("%d\t",a[i]);
						//printf("\n");
					//printf("\n ");
				}
				count++;
				printf("\n");
				printf("\nAfter sorting\n");
				printf("\n");
				for(i=0;i<n;i++)
				{
					printf("%d\t",a[i]);
				}

				printf("\n");
				break;

	default : printf("\nThank you");

}
printf("\n");
printf("Do you want to continue (Y/n) : ");
scanf("%s",&c);
printf("\n");
}while(c=='Y'||c=='y');
}

