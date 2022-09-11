#include<stdio.h>
#include<stdlib.h>
main()
{
		int ans,n,a[20],b[20],k=0,l,i,j,o=1;
		printf("Size of the array : ");
	scanf("%d",&n);
	while(n>20)
	{
		printf("Value is greater than array size 20 please enter again :");
		scanf("%d",&n);
	}
	printf("Please enter the value of array :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
			{
			printf("The %d value is repeated please enter other value :",j);
			scanf("%d",&a[i]);
			while(a[i] == a[j])
			{
				printf("Stop repeating the value please enter right value :");
				scanf("%d",&a[i]);
			}
			}
		}
	}
	for(i=0;i<n;i++)
	{

	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");

	do{
	printf("Menu :\n");
	printf("1)Input of array(if you want to overwrite)\n");
	printf("2)Delete an element\n");
	printf("3)Exit\n");
	scanf("%d",&ans);
	while(ans>=4 || ans<=0)
	{
		printf("Please enter a right option :");
		scanf("%d",&ans);
	}
	switch(ans)
	{
		case 1:

			printf("Size of the array : ");
			scanf("%d",&n);
			while(n>20)
			{
				printf("Size of matrix is only 20(Please enter again) :");
				scanf("%d",&n);
			}
			printf("Please enter the value of array :\n");
			for(i=0;i<n;i++)
			{
				scanf("%d",&a[i]);
			}
			for(i=0;i<n;i++)
			{
				printf("%d\t",a[i]);
			}
			printf("\n");
			break;
		case 2:
			printf("Which position do you want to delete the value :\n");
			scanf("%d",&k);
			while(k>n || k<0)
			{
				printf("Sorry wrong value please enter again\n");
				scanf("%d",&k);
			}
			for(i=0;i<(n-1);i++)
			{
				if(i>=k)
				b[i]=a[i+1];
				else
				b[i]=a[i];
			}
			for(i=0;i<(n-1);i++)
			{
				a[i]=b[i];
			}
			for(i=0;i<(n-o);i++)
			{
				printf("%d\t",a[i]);
			}
			printf("\n");
			o++;
			break;
		case 3:
			exit(0);
	}

}while(ans != 20);
}

