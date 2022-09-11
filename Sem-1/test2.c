#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float si(float p,float t,float r);
float ci(float p,float t,float r);
float rate();
int cusn();
float pre();
float time();
int main()
{
	int n;
	float p=0.0,t=0.0,r=0.0,s=0.0,c=0.0;
    int cn=0;
	char ch='Y';
	while(ch=='y'||ch=='Y')
	{
	printf("\n1.Enter Details\n2.Display Deatails\n3.Interests Difference\n4.Exit");
	printf("\n\nEnter Your Choice:: ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			cn=cusn();
			p=pre();
			t=time();
			r=rate();
	        s=si(p,t,r);
	        c=ci(p,t,r);
	        printf("\n\nSimple Interest:: %.2f",s);
	        printf("\n\nCompound Interest:: %.2f",c);
			break;
		case 2:
    printf("\n\nCustomer Number:: %d",cn);
	printf("\nPrinciple Amount:: %.2f",p);
	printf("\nNumber of Years:: %.2f",t);
	printf("\nRate of Interest:: %.2f",r);
	printf("\n\nSimple Interest:: %.2f",s);
	printf("\n\nCompound Interest:: %.2f",c);
	fflush(stdin);
			break;
		case 3:
			printf("Interests Difference= %.2f",c-s);
			fflush(stdin);
			break;

		case 4:
			exit(0);

		default:
			printf("Invalid");
			fflush(stdin);
	}
	printf("\n\nDo you want to continue(Y/N):: ");
	scanf("%c",&ch);
}
	return 0;
}
float si(float p,float t,float r)
{
	return (p*t*r)/100;
}
float ci(float p,float t,float r)
{
	return (p*(pow((1+r/100),t)));
}
int cusn()
{
    int cn;
	printf("\nEnter Customer Number:: ");
	scanf("%d",&cn);
	return cn;
}
float pre()
{
    int p;
    fflush(stdin);
	printf("\nEnter Principle Amount:: ");
	scanf("%f",&p);
	return p;
}
float time()
{
    int t;
    fflush(stdin);
	printf("\nEnter Number of Years:: ");
	scanf("%f",&t);
	return t;
}
float rate()
{
    int r;
    fflush(stdin);
    printf("\nEnter Rate of Interest:: ");
	scanf("%f",&r);
	fflush(stdin);
	return r;
}


