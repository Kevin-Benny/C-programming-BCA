#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>

int fib(int n)
{
   if (n <= 1)
   return n;
   return fib(n-1) + fib(n-2);
}

main ()
{
  int n,i,m,cho;
  char ch;
  ch='y';
  while(ch=='y')
  {
  	printf("\nMENU:\n");
  	printf("1. Print  Fibonacci series till n terms\n");
  	printf("2. Print  nth and mth term of Fibonacci series\n");
  	printf("Enter your choice : ");
  	scanf("%d",&cho);
  	system("cls");
  	switch(cho)
  	{
  		case 1:
  			{
  				printf("Enter no. of terms to print : ");
  				scanf("%d",&n);
  				system("cls");
  				printf("FIBONACCI SERIES :- \n\n");
  				for(i=0;i<n;i++)
                {
  	             printf("%d ", fib(i));
                }
                }
			break;

		case 2:
		    {
		    	printf("Enter nth and mth term to print :");
		    	scanf("\n%d\n%d",&n,&m);
		    	system("cls");
		    	printf("%dth term is %d ",n,fib(n-1));
		    	printf("\n%dth term is %d ",m,fib(m-1));
			}
			break;
		default: printf("Wrong Choice");
	}

	getch();
	printf("\n\nWant to Calculate more(y/n)");
	fflush(stdin);
	ch=getchar();
	ch=tolower(ch);
  }
  return 0;
}
