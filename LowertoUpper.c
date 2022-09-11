#include <stdio.h>
//
int main(){
	char ip[50];
	int j,i;
	printf("\nenter string  ");
j=0;
do
{
	ip[j]=getchar();
}
while(ip[j++]!='\n'); //??if(ip[j++]!='\n');  ip[j++]='\0';
ip[j-1]='\0';
for(i=0;ip[i]!='\0';i++)
{
	if(ip[i]>='a' && ip[i]<='z')
        {
		ip[i]=ip[i]-32;
        }
}
printf("\nConverted String = %s ",ip);
}

// user define function
//wacp to find the squares of 5 given numbers using functions
/*
void squaren(char);
main()
{
    char name,p;
    scanf("%c",&name);
     printf("%c",name);
    p=ltou(name);
    printf("%c",p);
*/
/*
void squaren(char x[])
    {
       if(x[0]>='a' && x[0]<='z')
       {
           x[0]=x[0]-32;
       }
    }
void main()
{
    char name[50];
    int i;
    gets(name);
    puts(name);
    ltou(name);
    puts(name);
}
*/
