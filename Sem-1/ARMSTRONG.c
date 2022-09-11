#include<stdio.h>
#include<math.h>
void main()
{
/*armstrong. 135- 1^3+3^3+5^3!=135 hence not armstrong no*/
    int i,c=0,n,d,p,s=0;
  	//  float ;
	printf("ENTER THE NUMBER ");
	scanf("%d",&n);
	for(i=n;i!=0;i=i/10)
    {
        c++;
    }
    printf("%d \n",c);
    
    


   for(i=n;i!=0;i=i/10)
   {

       d=i%10;
        s=s+pow(d,c);
        printf("d=%d\n",d);
        p=0;

        p=(int)pow(d,c);
               printf("p=%d\n",p);
   }
   if(s==n)
   {
       printf(" its a armstrong no'%d'",s);
   }
   else if(s!=n)
     printf(" its not a armstrong no'%d'",s);
     else
         printf(" error");
}

