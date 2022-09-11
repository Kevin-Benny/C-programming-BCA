#include<stdio.h>
void main()
{
	int i,j;
	printf("enter a string");
	char a[80];
	for(i=0;(a[i]=getchar())!='\n';i++);
	for(j=0;j<i;j++)
	{
		if(a[j]<='Z'&&a[j]>='A')
		{
			a[j]=a[j]+32;
		}

	}
	for(j=0;j<i;j++)
	{
		printf("%c",a[j]);
	}

}
