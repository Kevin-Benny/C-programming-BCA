#include<stdio.h>
#define SIZE 10
void inputArray(int [][10],int,int);
void printArray(int [][10],int,int);
void main() {
char input;
while (1)
	  {
	  	int a[SIZE][SIZE],m,n;
	  	printf("How many rows: ");
	  	scanf("%d",&m);
	  	printf("\nHow many columns: ");
	  	scanf("%d",&n);
	  	printf("Your array will be of size %d * %d",m,n);
		inputArray(a,m,n);
		printf("The Elements you have entered are: \n");
		printArray(a,m,n);
		
	  
	  
	  printf("\nDo you want to rerun this program?(y or n)\n");
	  fflush(stdin);
	  scanf("%c",&input);
	  if(input == 'n' || input == 'N'){
			   printf("Thank you and Goodbye!!");
			   break;
	  		   }
		}
		getch();
}

void inputArray(int a[][10], int m, int n){
	int i,j;
	printf("\nPlease enter the %d numbers: \n",n*m);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",(*(a+i)+j));
		}
		printf("\n");
	}
}

void printArray(int a[][10],int m, int n){
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",*(*(a+i)+j));
		}
		printf("\n");
	}
}
