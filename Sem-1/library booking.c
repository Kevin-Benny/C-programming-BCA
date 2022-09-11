#include<stdio.h>
int main()
{
	float sum=0;
	double n;
	int customer,d,dam;

	printf("Enter your customer number\n");
	scanf("%lf",&n);
	printf("\n Are you Student'1' or faculty'2' \n");
	scanf("%d",&customer);
	printf("Enter the no of days borrowed\n");
	scanf("%d",&d);

	printf("your customer number is %lf \n",n);
	printf("you are %d \n",customer);
	printf("you borrowed the book for %d days\n",d);

	switch(customer)
	{
		case 1:
			{

				if(d<=5)
				{
				sum=(sum+(d*2));
				}
				else if((d>5)&&(d<=10))
				{
					sum=(sum+((5*2)+((d-5)*2.5)));
				}
				else
				{
					sum=(sum+((5*2)+(5*2.5)+((d-10)*3.25)));
				}

                printf("Is the book damaged or not, if damaged type '1' or type '2'\n");
				scanf("%d",&dam);
				if(dam==1)
				{
					printf("A fine of 1000 rupees is added to your bill\n");
					sum=1000+sum;
				}
				break;

			}
		case 2:
			{
				printf("Is the book damaged or not? \n if damaged type '1' or type '2'\n");
				scanf("%d",&dam);
				if(dam==1)
				{
					printf("A fine of 2000 rupees is added to your bill\n");
					sum=2000;
				}
				if(d<=5)
				{
				printf("done 1\n");
				}
				else if((d>5)&&(d<=10))
				{
					sum=(sum+((5*4.5)+((d-5)*7.5)));
				}
				else
				{
					sum=(sum+((5*4.5)+(5*7.5)+((d-10)*10.5)));
				}



			}
	}
	printf("total amount you have to pay is %f\n",sum);
	getch();
}
