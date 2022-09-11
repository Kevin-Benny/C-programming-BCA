#include<stdio.h>
int main()
{
    int a,b,c=0,*p,*q,**r;
    char d[10];
    p=&a;
    q=&b;
    r=&p;
    printf("enter the first no \n");
    scanf("%1d",&a);
    printf("enter the second no \n");
    scanf("%1d",&b);
    printf("\n first no is:%d",a);
    printf("\n second no is:%d",b);
    printf("\n first no address is:%d",&a);
    printf("\n second no address is:%d",&b);
    printf("\n second no pointer address is:%d",*p);
    printf("\n second no pointer address is:%d",*q);
    printf("\n first pointer address is:%d",&p);
    printf("\n first pointer address is:%d",p);
    printf("\n second no pointer pointer address is:%d",**r);
    printf("\n third  pointering address  is:%d",r);
    printf("\n third pointer address is:%d",&r);
    printf("\n enter the value of third no \n");
    fflush(stdin);
    scanf("%d%*c%d",&a,&c);
    printf("\n 2 value of first and third:%d",c);
    printf("\n enter the value of char \n");
    fflush(stdin);
    scanf("%5c",&d);
    printf("\n value of char:%s",d);
    return 0;
}

