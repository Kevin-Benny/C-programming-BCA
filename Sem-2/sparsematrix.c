#include<stdio.h>
struct sparse
{
	int row;
	int col;
	int val;
};
void main()
{
	int loop=1;
	while(loop==1)
    {
        int r,c,i,j,k=0,t;
	printf("\nEnter No of Rows::");
	scanf("%d",&r);
	printf("Enter No of Columns::");
	scanf("%d",&c);
	int a[r][c];

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
            printf("Enter the %d:%d Elements::\n",i+1,j+1);
			scanf("%d",&a[i][j]);
			if(a[i][j]!=0)
			{
				k++;
			}
		}
	}
	struct sparse b[k];
	b[0].row=r;
	b[0].col=c;
	b[0].val=k;
	t=1;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]!=0)
			{
				b[t].row=i;
				b[t].col=j;
				b[t].val=a[i][j];
				t++;
			}
		}
	}
	printf("______________________\n");
	 printf("\n\nThe matrix is :\n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
    {
    printf("%d\t",a[i][j]);
    }
    printf("\n");
    }
    printf("_____________________________________\n");
    printf("\n\nthe non zero value matrix are :\n\n");
	printf("______________________\n");
	printf(" |ROW\t| COL\t| VAL\n");
	printf("______________________\n");
	for(i=0;i<t;i++)
	{
		printf("%d| %d\t| %d\t| %d\n",i,b[i].row,b[i].col,b[i].val);
	}
	printf("Type 1 of you want to retry or type 0 to quit");
	scanf("%d",&loop);
	if(loop!=0 || loop!=1)
    {
        printf("type 0 or 1");
    }
	}

}
