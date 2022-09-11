#include<stdio.h>
void main()
{
//sequence
	int a=1,b=0,c=0,n,i;
	printf("ENTER THE VALUE OF N ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		c=a+b;
		printf(" %d",c);

		a=b;
		b=c;

	}

		printf("%d",c);

}
