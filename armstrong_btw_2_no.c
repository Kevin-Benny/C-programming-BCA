    #include <stdio.h>
    #include <math.h>
    int main()
    {
        int l, h, i, c1, c2, remainder, n = 0, result = 0;
        printf("Enter two numbers(intervals): ");
        scanf("%d %d", &l, &h);
        printf("Armstrong numbers between %d an %d are: ", l, h);
        // why is 153 not a displaying, refer armstrong
        for(i =l; i < h; ++i)
        {
            c2 = i;
            c1 = i;
            while (c1 != 0)
            {
                c1 = c1/10;
                n++;
            }
            while (c2 != 0)
            {
                remainder = c2 % 10;
                result =result+pow(remainder, n);
                c2 /= 10;
            }
            if (result == i) {
                printf("%d ", i);
            }
            n = 0;
            result = 0;
        }
        return 0;
    }
