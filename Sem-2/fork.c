#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void main()
{
pid_t pid=fork();
if(pid == 0)
{
printf("\nchild process pid=%d\n",getpid());
printf("\nchild process ppid=%d\n",getppid());
printf("\nI AM CHILD\n");
}
else
{
printf("\nparent process pid=%d\n",getpid());
printf("\nparent process ppid=%d\n",getppid());
printf("\nI AM PARENT\n");
}
}
