#include<stdio.h>
void main()
{
//DEPRECIATION
	int i,p,y,a;
	printf("ENTER THE AMOUNT,PERCENTAGE OF DEPRECIATION AND YEARS ");
	scanf("%d",&a);
	scanf("%d",&p);
	scanf("%d",&y);	
	for(i=1;i<=y;i++)
	{
		a=a-((a*p)/100);
	}
	printf("DEPRECIATED VALUE IS ");
	printf("%d",a);
	printf(" AFTER ");
	printf("%d",y);
	printf(" YEARS");
	
	

}
