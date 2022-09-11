#include<stdio.h>
int main()
{
    int a=5;
    printf("\n%d %d %d ",++a,a,a++);
    a=10;
    printf("\n %d %d ",a++,a);
    a=10;
    printf("\n %d %d %d",a,a++,++a);
    return 0;
}


