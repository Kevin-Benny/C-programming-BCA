#include<stdio.h>
int main()
{
    int n,se,so,u,c;
	 printf("Enter the number : ");
     scanf("%d",&n);
     se=0;
     so=0;
     while(n!=0)
    {
	   u=n%10;

      if(c%2==0)
      se=se+u;

      else
      so=so+u;

      n=n/10;
      c++;
	}
      printf("\nThe sum of odd values are : %d",so);
      printf("\nThe sum of even values are : %d",se);
    if(so>se)
      printf("\nSum of odd digits is greater than sum of even digits");
    else if(se>so)
      printf("\nSum of even digits is greater than sum of odd digits");
    else
     printf("\nSum of odd digits is equal to sum of even digits");
 getchar();
 }

