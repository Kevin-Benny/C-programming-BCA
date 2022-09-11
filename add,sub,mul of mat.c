#include<stdio.h>
#include<math.h>
void main()
{
	int a[15][15],b[15][15],c[15][15],r,cc,i,j,n,p,s=0;
	printf("Enter the number of rows: ");
	scanf("%d",&r);
	printf("Enter the number of columns: ");
	scanf("%d",&cc);
	printf("\nEnter the values for the 1st matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<cc;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nThe given matrix is:\n");
		for(i=0;i<r;i++)
	{
		for(j=0;j<cc;j++)
		{
			printf("\t%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nEnter the values for the 2nd matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<cc;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nThe given matrix is:\n");
		for(i=0;i<r;i++)

	{
		for(j=0;j<cc;j++)
		{
			printf("\t%d\t",b[i][j]);
		}
		printf("\n");
	}
	fflush(stdin);
	char ch='y';
	fflush(stdin);
    while(ch=='y'||ch=='Y')
	{
	printf("\n\n1.Addition\n2.Subtraction\n3.Multiplication\n");
	printf("\nEnter your Value:: ");
	scanf("%d",&n);
	fflush(stdin);
	switch(n)
	{
		case 1:
			{
				for(i=0;i<r;i++)
				{
					for(j=0;j<cc;j++)
					{
						c[i][j]=0;
						c[i][j]=a[i][j]+b[i][j];
					}
				}
				printf("Addition of Matrices::\n");
				for(i=0;i<r;i++)
				{
					for(j=0;j<cc;j++)
					{
						printf("%d ",c[i][j]);
					}
					printf("\n");
				}
				break;
			}
		case 2:
			{
				for(i=0;i<r;i++)
				{
					for(j=0;j<cc;j++)
					{
						c[i][j]=0;
						c[i][j]=a[i][j]-b[i][j];
					}
				}
				printf("Subtraction of Matrices::\n");
				for(i=0;i<r;i++)
				{
					for(j=0;j<cc;j++)
					{
						printf("%d ",c[i][j]);
					}
					printf("\n");
				}
				break;
			}
		case 3:
			{
				for(i=0;i<r;i++)
				{
					for(j=0;j<cc;j++)
					{
						c[i][j]=0;
						for(p=0;p<r;p++)
						{
							c[i][j]+=a[i][p]*b[p][j];
						}
					}
				}
				printf("Multiplication of Matrices::\n");
				for(i=0;i<r;i++)
				{
					for(j=0;j<cc;j++)
					{
						printf("%d ",c[i][j]);
					}
					printf("\n");
				}
				break;
			}
		default:
			{
				printf("\nInvalid Operation");
				break;
			}
	}
	printf("\n\nDo you want to continue?(Y/N):: ");
	fflush(stdin);
	scanf("%c",&ch);
	fflush(stdin);
    }
}
