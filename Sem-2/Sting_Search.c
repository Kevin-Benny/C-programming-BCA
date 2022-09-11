#include<string.h>
#include<stdbool.h>
int main()
{
char str1[100];
char str2[100];
char *t;
printf("enter the first string");gets(str1);
fflush(stdin);
printf("enter the second string");
gets(str2);
t=strstr(str1,str2);
if(t==NULL)
{printf("not found");}
else

}
