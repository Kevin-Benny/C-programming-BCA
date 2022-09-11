#include <stdio.h>
int main(){
char ip[50];
int s,m,e,l=0,i;
printf("enter string\n");
i=0;
do
{
	ip[i]=getchar();
}
while(ip[i++]!='\n');
ip[i-1]='\0';

while(ip[l]!='\0')
{
	l++;
}
e=l-1;
m=l/2;
for(s=0;s<m;s++)
{
	if(ip[s]!=ip[e])
    {
		printf("  not a palindrome  ");
    }
	e--;
}
		if(ip[s]==ip[e])
		{
		printf("  palindrome  ");
        }
return 0;
}
