#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the 3 no\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a==c)
            printf("\n%d is the largest and %d is the second largest",a,b);
        else if (b>c)
            printf("\n%d is the largest and %d is the second largest",a,b);
        else
        {
            if(a>c)
                printf("\n%d is the largest and %d is the second largest",a,c);
            else if(c>a)
                printf("\n%d is the largest and %d is the second largest",c,a);
        }
    }
    else
    {
        if((a==b)&&(c!=a)&&(c<a))
            printf("\n%d is the largest and %d is the second largest",b,c);
        else if((b==c)&&(c!=a))
            printf("\n%d is the largest and %d is the second largest",b,a);
        else if((a>c)&&(b!=a))
            printf("\n%d is the largest and %d is the second largest",b,a);
        else
        {
            if(b>c)
                printf("\n%d is the largest and %d is the second largest",b,c);
            else if(a<b)
                printf("\n%d is the largest and %d is the second largest",c,b);
            else if(c>a)
                printf("\n%d is the largest and %d is the second largest",c,a);
            else if(a=b=c)
                printf("\n%d is the largest",c);


        }
    }

}
