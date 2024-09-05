#include<stdio.h>

int main(){
//INPUT
	int a,b,c;
	printf("Enter number1: ", a);
	scanf("%d", &a); 
	printf("\nEnter number2: ", b);
	scanf("%d", &b);

//BEFORE SWAPPING THE NUMBERS
	printf("Before swapping:-\n");
	printf("Your number1 is %d\n", a);
	printf("Your number2 is %d\n", b);
	c=a;
	a=b;	
	b=c;

//RESULTS AFTER SWAPPING
	printf("After swapping:-\n");
	printf("Your number1 is %d\n", a);
	printf("Your number2 is %d\n", b);
	return 0;
//THE VALUES DISPLAYED WOULD BE SWAPPED!
}
