#include <stdio.h>
int main()
{
    int i, j, end, prime;
    printf("Find prime numbers between 1 to : ");
    scanf("%d", &end);

    printf("All prime numbers between 1 to %d are:\n", end);
    i=2;
    while(i<=end)
    {

        prime = 1;
        j=2;
        while(j<=i/2)
        {

            if(i%j==0)
            {
                prime = 0;
                break;
            }
            j++;
        }
        if(prime==1)
        {
            printf("%d, ", i);
        }
        i++;
    }

    return 0;
}
