#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10][10],b[10][10];
 int m,n,p,q,t,col;
 int i,j;

 	printf("\nEnter No of Rows::");
	scanf("%d",&m);
	printf("Enter No of Columns::");
	scanf("%d",&n);

 for(i=1;i<=m;i++)
 {
   for(j=1;j<=n;j++)
   {
     printf("Enter the %d:%d Elements::\n",i,j);
     scanf("%d",&a[i][j]);
     }
  }
printf("\n\n");
printf("__________________________________\n");
 printf("\n\nThe matrix is :\n\n");

for(i=1;i<=m;i++)
 {
   for(j=1;j<=n;j++)
   {
    printf("%d",a[i][j]);
     }
     printf("\n");
   }


t=0;
printf("__________________________________\n");
printf("\n\nthe non zero value matrix are :\n\n");

for(i=1;i<=m;i++)
{
  for(j=1;j<=n;j++)
  {
  if(a[i][j]!=0)
  {
   t=t+1;
   b[t][1]=i;
   b[t][2]=j;
   b[t][3]=a[i][j];
    }  }
}

printf("\n");
printf("0 %d %d %d\n\n",m,n,t);

for(i=1;i<=t;i++)
{
 printf("%d| %d %d %d \n",i,b[i][1],b[i][2],b[i][3]);
  }

b[0][1]=n; b[0][2]=m; b[0][3]=t;
q=1;
printf("__________________________________\n");
printf("\n\nthe transpose of the matrix :\n ");

if(t>0)
{
 for(i=1;i<=n;i++)
 {
   for(j=1;j<=t;j++)
   {
    if(b[j][2]==i)
    {
      a[q][1]=b[j][2]; a[q][2]=b[j][1];
      a[q][3]=b[j][3]; q=q+1;
    }
   }
 }
}
printf("\n\n");
printf("0 %d %d %d\n\n",b[0][1],b[0][2],b[0][3]);

for(i=1;i<=t;i++)
{
 printf("%d| %d %d %d\n",i,a[i][1],a[i][2],a[i][3]);
    }
 getch();
}
