#include<stdio.h>
#include<math.h>
void main()
{
//sum of the power of the digits
	int i,d,s=0,a,n;
	printf("ENTER A NUMBER AND THE POWER ");
	scanf("%d",&a);
	scanf("%d",&n);
	for(i=a;i!=0;i=i/10)
	{
		d=i%10;
		s=s+pow(d,n);
	}
	printf("sum of the  power of the digits of ");
	printf("%d",a);
	printf(" is ");
	printf("%d",s);

}
