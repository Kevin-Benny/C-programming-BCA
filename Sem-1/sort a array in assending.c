#include<stdio.h>
int main()
{
    int a[100],n,t;
    printf("enter the no of arrays");
    scanf("%d",&n);
    printf("\n enter the elements in the array");
    for(int i=0;i<n;i++)
    {
        printf("\n enter the %d element",i+1);
       scanf("%d",&a[i]);
    }
    for(int i=0;i<(n-1);i++)
    {
        for(int j=0;j<(n-i-1);j++)
        {
          if(a[j]>a[j+1])
          {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
          }
        }
    }
    for(int i=0;i<n;i++)
    {
       printf("%d \t",a[i]);
    }
}
