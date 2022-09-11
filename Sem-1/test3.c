#include<stdio.h>
void main()
{
    int a=1,b,c=5;
    b=(++a)+(++a);
    c=++c;
    printf("a=%d \n",a);
    printf("b=%d",b);
    printf("c=%d",c);

    return 0;
}
