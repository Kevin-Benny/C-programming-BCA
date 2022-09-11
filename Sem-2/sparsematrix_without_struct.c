#include<stdio.h>
void main()
{
    int m,n,i,j,k=0;
    printf("enter the size of the matrix");
    scanf("%d",&m);
    scanf("%d",&n);
    int a[m][n];
    int b[m*n][3];
    printf("enter the value of the matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=0)
            {
                b[k][0]=i;
                b[k][1]=j;
                b[k][2]=a[i][j];
                k++;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t\t",b[i][j]);
        }
            printf("\n");
    }
        getch();
}
