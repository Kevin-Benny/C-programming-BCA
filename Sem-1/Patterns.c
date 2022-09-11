    #include <stdio.h>
    int main()
    {
        int s,i, j, rows;
        int repeat=1;
        while(repeat==1)
		{
        printf("Enter 1 for *,2 for numbers, 3 for Characters, 4 for inverted *, \n 5 for inverted no, 6 for pyramid,7 for no pyramid, 8 for inverted pyramid \n");
        scanf("%d",&s);
    printf("Enter number of rows: ");
    scanf("%d",&rows);
        switch(s)
{
case 1:
        {
        for(i=1; i<=rows; ++i)
        {
            for(j=1; j<=i; ++j)
            {
                printf("* ");
            }
            printf("\n");
        }
        break;
        }
case 2:
    {
    for(i=1; i<=rows; ++i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    break;
    }
case 3:
    {
   char input, alphabet = 'A';
    printf("Enter the character you want start of with: ");
    fflush(stdin);
    scanf("%c",&alphabet);
    fflush(stdin);
    for(i=1; i <= rows; ++i)
    {
        for(j=1;j<=i;++j)
        {
            printf("%c", alphabet+j-1);
        }
        printf("\n");
    }
    break;
    }
case 4:
    {

    for(i=rows; i>=1; --i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
    break;
    }
case 5:
    {
    for(i=rows; i>=1; --i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    break;

 }
case 6:
{
    int i, space, k=0;
    for(i=1; i<=rows; i++, k=0)
    {
        for(space=1; space<=rows-i; space++)
        {
            printf("  ");
        }
        while(k != 2*i-1)
        {
            printf("* ");
            k++;
        }
        printf("\n");
    }
    break;
    }
    case 7:
        {
    int i, space, k=0, count = 0, count1 = 0;
    for(i=1; i<=rows; ++i)
    {
        for(space=1; space <= rows-i; ++space)
        {
            printf("  ");
            ++count;
        }
        while(k != 2*i-1)
        {
            if (count <= rows-1)
            {
                printf("%d ", i+k);
                ++count;
            }
            else
            {
                ++count1;
                printf("%d ", (i+k-2*count1));
            }
            ++k;
        }
    }
    break;
        }
case 8:
    {

        int  i, j, space;
    for(i=rows; i>=1; --i)
    {
        for(space=0; space < rows-i; ++space)
            printf("  ");
        for(j=i; j <= 2*i-1; ++j)
            printf("* ");
        for(j=0; j < i-1; ++j)
            printf("* ");
        printf("\n");
    }
break;
    }
}
printf("type 1 to repeat or else type 0 ");
scanf("%d",&repeat);
}
    }
