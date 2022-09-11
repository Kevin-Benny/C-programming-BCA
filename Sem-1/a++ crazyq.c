#include<stdio.h>
int main(){
	int a=5;
    printf("\n1: %d", a++);
    a=5;
    printf("\n2: %d",++a);
    a=5;
    printf("\n3: %d %d %d ",++a,a,a++);  //a++ is run first, ++a runs last so final sum of all increments -1
    a=10;
    printf("\n4: %d %d ",a,a++);
    a=10;
    printf("\n5: %d %d %d",a,a++,++a);
    a=10;
    printf("\n6: %d %d %d",a++,a,++a);
    a=10;
    printf("\n7: %d %d",a++,++a);
    a=10;
    printf("\n8: %d %d %d %d",a++,a,++a,a++);  //  end a = 13  last a[3] first so thats 10, then a[2] 13 - 0 as after increment print, then a[1] same as final answer 13, a[0] 13 - 1 = 12 -1 as before increment
    a=10;
    printf("\n9: %d %d %d %d %d",a++,a,++a,a++,a);
    a=10;
    printf("\n10: %d %d %d %d %d %d",a++,a,++a,a,a++,++a);
    a=10;
    printf("\n11: %d %d %d %d %d %d",a++,a,++a,a++,a,++a);
    a=10;
    printf("\n12: %d %d %d %d %d %d",a++,a,++a,a++,++a,a++);
    a=10;
    printf("\n13: %d %d %d %d %d %d %d",a++,++a,a++,a++,a++,a,a++); 
    a=10;
    printf("\n14: %d %d %d %d %d %d",a++,a++,a++,a++,a,a++);
    a=10;
    printf("\n15: %d %d %d %d %d %d",a++,++a,a++,a++,a,a++);
	return 0;	
}

// FInal concusiion 

// runs right to left for a++
// a gives final value
//++a gives final value and adds one to a
//a++ of that position is all increment that happened ar the right side + starting value

