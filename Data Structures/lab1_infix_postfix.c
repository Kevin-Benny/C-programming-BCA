#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 20
char s[MAX];
int top=-1;
void push(char ch){
    s[++top]=ch;
}
char pop(){
    return s[top--];
}
int prece(char ch){
    switch(ch){
        case '^':return (3);
        case '/':
        case '*':return (2);
        case '+':
        case '-':return (1);
        case '#':
        case '(':return (0);

    }
    return 0;
}
int main(){
    char str[MAX],infix[MAX],ele;
    int j=0;
    printf("\nEnter the Exp: ");
    scanf("%s",infix);
    push('#');
    int len = strlen(infix);
        for(int i=0;i<len;i++)
        {
            if(isalnum(infix[i])){
                str[j++]=infix[i];
            }
            else if(infix[i]=='('){
                push(infix[i]);
            }
            else if(infix[i]==')'){
                while(s[top]!='('){
                    ele=pop();
                    str[j++]=ele;
                }
                pop();
            }
            else{
                while(prece(s[top])>=prece(infix[i])){
                        ele=pop();
                        str[j++]=ele;   
                }
                push(infix[i]);
            }
        }
        while(s[top]!='#'){
            ele=pop();
            str[j++]=ele;
        }
        str[j]='\0';
        printf("\n%s",str);
}