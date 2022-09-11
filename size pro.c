#include <stdio.h>
#define SIZE(x) sizeof(x)*8

void signed_one(int);
void unsigned_one(int);

void main()
{
    printf("\nrange of int");
    signed_one(SIZE(int));
    printf("\nrange of unsigned int");
    unsigned_one(SIZE(unsigned int));
    printf("\nrange of char");
    signed_one(SIZE(char));
    printf("\nrange of unsigned char");
    unsigned_one(SIZE(unsigned char));
    printf("\nrange of short");
    signed_one(SIZE(short));
    printf("\nrange of unsigned short");
    unsigned_one(SIZE(unsigned short));

}
/* RETURNS THE RANGE SIGNED*/
void signed_one(int count)
{
    int min, max, pro;
    pro = 1;
    while (count != 1)
    {
        pro = pro << 1;
        count--;
    }
    min = ~pro;
    min = min + 1;
    max = pro - 1;
    printf("\n%d to %d", min, max);
}
/* RETURNS THE RANGE UNSIGNED */
void unsigned_one(int count)
{
    unsigned int min, max, pro = 1;

    while (count != 0)
    {
        pro = pro << 1;
        count--;
    }
    min = 0;
    max = pro - 1;
    printf("\n%u to %u", min, max);
}
