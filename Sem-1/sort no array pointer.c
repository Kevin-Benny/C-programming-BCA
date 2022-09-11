#include <stdio.h>
void sortArray(int n, int* ptr);
void main()
{
	int n,a[30],i;
	char choice;
    printf("+------------------------------------------+\n");
	printf("|      Welcome to The sorting Program      |\n");
	printf("+------------------------------------------+\n");
	do{
	printf("Enter the number of elements in the array: ");scanf("%d",&n);
	if(n<30){
		for(i=0;i<n;i++){
		printf("Enter element #%d: ",i+1);
		scanf("%d",&a[i]);
	}
    sortArray(n,&a);
    for (i = 0; i < n; i++)
        {
		printf("%d ",a[i]);
		}

	}else{
		printf("Please enter a no. less than 30");
	}
    fflush(stdin);
    printf("\nDo you want to Rerun this Application (y or n)?: ");
    scanf("%c",&choice);
    choice=tolower(choice);
	}while(choice =='y');
}

void sortArray(int n, int* p)// imp for *p
{
    int i, j, t;

    for(i=0;i<n;i++){
        for (j=0;j<(n-i-1);j++){
            if (*(p+j)>*(p+j+1))
                {
                t=*(p+j);
                *(p+j) = *(p + j+1);
                *(p+j+1) = t;
                }
        }
    }
}
