#include <stdio.h>
void main()
{
	int a[15][15],i,j,r,c,sum;
	printf("Enter the number of rows: ");
	scanf("%d",&r);
	printf("Enter the number of columns: ");
	scanf("%d",&c);
	printf("\nEnter the values for the matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nThe given matrix is:\n");
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nThe transpose of the matrix is:\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("\t%d\t",a[j][i]);
		}
		printf("\n");
	}
	        for (i = 0; i <r; ++i) 

        {

            for (j = 0; j < c; ++j) 

            {

                sum = sum + a[i][j] ;

            }

 

            printf("Sum of the %d row is = %d\n", i, sum);

            sum = 0;

 

        }

        sum = 0;

        for (j = 0; j < c; ++j) 

        {

            for (i = 0; i <r; ++i)

            {

                sum = sum + a[i][j];

            }

 

            printf("Sum of the %d column is = %d\n", j, sum);

            sum = 0;

	}
}
