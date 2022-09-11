#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float p=0.0,t=0.0,r=0.0,s=0.0,c=0.0;
int cn=0;
float si();
float ci();
void cdet();
void disp();
int main()
{
	int n;
	char ch='Y';
	while(ch=='y'||ch=='Y')
	{
	printf("\n1.Enter Details\n2.Display Deatails\n3.Interests Difference\n4.Exit");
	printf("\n\nEnter Your Choice:: ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:{
			cdet();
	        s=si();
	        c=ci();
	        printf("\n\nSimple Interest:: %.2f",s);
	        printf("\n\nCompound Interest:: %.2f",c);
			break;
		}
		case 2:{
			disp();
			break;
		}
		case 3:{
			printf("Interests Difference= %.2f",c-s);
			fflush(stdin);
			break;
		}
		case 4:{
			exit(0);
		}
		default:{
			printf("Invalid");
			fflush(stdin);
			break;
		}
	}
	printf("\n\nDo you want to continue(Y/N):: ");
	scanf("%c",&ch);
}
	return 0;
}
float si()
{
	return (p*t*r)/100;
}
float ci()
{
	return (p*(pow((1+r/100),t)));
}
void cdet()
{
	printf("\nEnter Customer Number:: ");
	scanf("%d",&cn);
	printf("\nEnter Principle Amount:: ");
	scanf("%f",&p);
	printf("\nEnter Number of Years:: ");
	scanf("%f",&t);
	printf("\nEnter Rate of Interest:: ");
	scanf("%f",&r);
	fflush(stdin);
}
void disp()
{
	printf("\n\nCustomer Number:: %d",cn);
	printf("\nPrinciple Amount:: %.2f",p);
	printf("\nNumber of Years:: %.2f",t);
	printf("\nRate of Interest:: %.2f",r);
	printf("\n\nSimple Interest:: %.2f",s);
	printf("\n\nCompound Interest:: %.2f",c);
	fflush(stdin);
}
