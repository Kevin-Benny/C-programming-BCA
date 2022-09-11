#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n, i, j, c, a[15][15] ;
    printf("Enter the size of the magic square : ") ;
    scanf("%d", &n) ;
    if (n % 2 == 0)
    {
        printf("\nMagic square is not possible") ;
        exit (0) ;
    }
    printf("\nThe magic square for %d x %d is :\n\n", n, n) ;
    j = (n + 1) / 2 ;
    i = 1 ;
    for(c = 1 ; c <= n * n ; c++)
    {
        a[i][j] = c ;
        if(c % n == 0)
        {
            i = i + 1 ;
            goto loop ;
        }
        if(i == 1)
        i = n ;
        else
        i = i - 1;
        if(j == n)
        j = 1;
        else
        j = j + 1;
        loop :;
    }
    for (i = 1 ; i <= n ; i++)
        {
        for (j = 1 ; j <= n ; j++)
        {
            printf("%d\t", a[i][j]) ;
        }
        printf("\n\n") ;
    }
}
