#include<stdio.h>
void main()
{
//reverse
	int i,d,rev=0,a;
	printf("ENTER A NUMBER ");
	scanf("%d",&a);
	for(i=a;i!=0;i=i/10)
	{
		d=i%10;
		rev=rev*10+d;
	}
	d=125/10;
	printf("REVERSE OF ");
	printf("%d",a);
	printf(" is ");
	printf("%d",rev);
	printf("\n%d",d);

}
