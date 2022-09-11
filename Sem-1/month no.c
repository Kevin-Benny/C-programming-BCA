#include<stdio.h>
void main()
{
    int n,y;
    printf("input month:");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("\n this month have 31 days \n");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf(" this month have 31 days \n");
        break;
    case 2:
         printf(" this month have 28 days or 29 days on leap year\n");
         printf(" enter year \n");
         scanf("%d",&y);
         if(y%4 == 0)
    {
        if( y%100 == 0)
        {
            if ( y%400 == 0)
                printf("%d is a leap year.", y);
            else
                printf("%d is not a leap year.", y);
        }
        else
            printf("%d is  leap year.", y);
    }
    else
        printf("%d is not a leap year.", y);
        break;
    default:
         printf(" invalid entry no \n");
        break;
    }
}

