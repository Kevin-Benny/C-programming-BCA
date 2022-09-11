#include<stdio.h>
#include<math.h>
#include<float.h>
void main()
{
    int a,b,c;
    float r1,r2,d;
    printf("Enter the variables of the quadratic equations");
    printf("\n a=");
    scanf("%d",&a);
    printf("\n b=");
    scanf("%d",&b);
    printf("\n c=");
    scanf("%d",&c);
    d=b*b-4*a*c;
    if(d>0)
  	{
  		r1 = (-b + sqrt(d) / (2 * a));
  		r2 = (-b - sqrt(d) / (2 * a));
		printf("\n Two Distinct Real Roots Exists: root1 = %.2f and root2 = %.2f", r1, r2);
  	}
  	else if(d == 0)
  	{
  		r1 = r2 = -b / (2 * a);
  		printf("\n Two Equal and Real Roots Exists: root1 = %.2f and root2 = %.2f", r1, r2);
  	}
  	else
  	{
        printf("\n roots of this equation doesn't Exist ");
  	}
}
