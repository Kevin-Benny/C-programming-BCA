#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char filename[20],ch;
    printf("\n enter the name of file:");
    gets(filename);
    fflush(stdin);
    fp=fopen(filename,"r");// r is for reading,w is for writing
  // fp=fopen("D:\College\Notes\notes.txt","r");
    if(fp==NULL)
    {
        printf("\n error \n");
        getch();
        exit(1);
    }
    while((ch = fgetc(fp)) != EOF) //fgetc::goes one char after other, takes a value and moves next EOF::end of file
        printf("%c",ch);
//fsee()
fclose(fp);
return 0;
}
