#include<stdio.h>
main()
{
//sum of digits
	int x,r,s=0,q;
	printf("Enter digits ");
	scanf("%d",&x);
	while(x!=0)
    {
        r=x%10;
        q=x/10;
        s=s+r;
        x=q;
    }
	printf("sum of the digits are");
	printf("%d",s);
}
