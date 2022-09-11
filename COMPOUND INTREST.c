#include<stdio.h>
#include<math.h>
void main()
{
//COMPOUND INTEREST
	int p,r,n,A;
	float y,k,m;
	printf("ENTER THE PRINCIPAL,RATE OF INTERSET AND TIME ");
	scanf("%d",&p);
	scanf("%d",&r);
	scanf("%d",&n);
	A=(p*(pow(((100+r)/100.0),n)))-p;
	//pow means power in math.h, pow(2,2) means 2 to the power 2. y 100???
	printf("COMPOUND INTREST FOR ");
	printf("%d",p);
	printf(" AMOUNT IS ");
	printf("%d",A);




}
