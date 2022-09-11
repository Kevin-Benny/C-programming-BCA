#include <stdio.h>
#include <stdlib.h>
int main()
{
   int num,bp,da,hra,pf,it,gs,d,b,ns;
   FILE *fp;
   char ch[100],c[100];

   fp = fopen("file1.txt","w");
   if(fp == NULL)
   {
      printf("Error in opening a file");
      exit(1);
   }
   printf("Enter employee number: ");
   scanf("%d",&num);
   fprintf(fp,"Employee number : %d\n",num);
   printf("Enter employee name: ");
   scanf("%s",&ch);
   fprintf(fp,"Employee name : %s\n",ch);
   printf("Enter Basic pay : ");
   scanf("%d",&bp);
   fprintf(fp,"Basic Pay : %d\n",bp);
   printf("Enter DA : ");
   scanf("%d",&da);
   fprintf(fp,"DA : %d\n",da);
   printf("Enter HRA : ");
   scanf("%d",&hra);
   fprintf(fp,"HRA : %d\n",hra);
   printf("Enter PF : ");
   scanf("%d",&pf);
   fprintf(fp,"PF : %d\n",pf);
   printf("Enter Income Tax : ");
   scanf("%d",&it);
   fprintf(fp,"Income Tax : %d\n",it);
   gs=bp+da+hra;
   fprintf(fp,"Gross Salary : %d\n",gs);
   printf("Enter Total Deduction : ");
   scanf("%d",&d);
   b=bp-d;
   fprintf(fp,"Basic pay after deduction  : %d\n",b);
   ns=gs-(pf+it);
   fprintf(fp,"Net Salary  : %d\n",ns);
   fclose(fp);
   return 0;
}
