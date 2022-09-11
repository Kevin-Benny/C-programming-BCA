#include<stdio.h>
void main()
{
int a[20],i,j,pos,n,m,s;
printf("enter no of Elements");
scanf("%d",&n);
printf("enter Elements\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("\n\n");
printf("1.for adding in first 2.add at end 3.for add at n no\n");
scanf("%d",&s);
int b[n+1];// new array
switch(s)
{
    case 2:{
pos=n;
for(i=0;i<n;i++)
{
 b[i]=a[i];
}
printf("enter new Elements");
scanf("%d",&b[pos-1]);
for(i=pos-1;i<n;i++)
{
 b[i+1]=a[i];
}

for(i=0;i<n+1;i++)
{
    printf("%d \n",b[i]);
}
}
break;
case 1:{
    pos=1;
for(i=0;i<n;i++)
{
 b[i]=a[i];
}
printf("enter new Elements");
scanf("%d",&b[pos-1]);
for(i=pos-1;i<n;i++)
{
 b[i+1]=a[i];
}

for(i=0;i<n+1;i++)
{
    printf("%d \n",b[i]);
}
}
break;
case 3:{
printf("enter position you want to add\n");
scanf("%d",&pos);
for(i=0;i<n;i++)
{
 b[i]=a[i];
}
printf("enter new Elements");
scanf("%d",&b[pos-1]);
for(i=pos-1;i<n;i++)
{
 b[i+1]=a[i];
}

for(i=0;i<n+1;i++)
{
    printf("%d \n",b[i]);
}
}
break;
}
}
