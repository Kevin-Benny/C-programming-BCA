#include<stdio.h>
#include<stdlib.h>
struct employ
{
char name;
int age;
float salary;
}emp;
void main()
{
	FILE *fp;
	//struct employ emp; //to local variable the stuct
	char fn[20];
	printf("enter the file name\n");
	gets(fn);
	fflush(stdin);
	fp=fopen(fn,"w");
	if(fp==NULL)
    {
        printf("\n error \n");
        getch();
        exit(1);
    }
    printf("enter name,age,salary\n");
    scanf("%s %d %f",&emp.name,&emp.age,&emp.salary);
      fflush(stdin);
    fprintf(fp, "%s %d %f \n",emp.name,emp.age,emp.salary );
    fclose(fp);
}
// write a prog to copy all the employwhose age is from 30 to 40;
/*if(emp.age>30)
{
    fprintf(fp2,)
}
*/
