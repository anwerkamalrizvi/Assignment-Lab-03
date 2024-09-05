#include<stdio.h>

int main(){
//We cant use int for a bigger value, for bigger value long is used.
//That is the reason the program is showing error, We can resolve it as following:-
	unsigned long i=3000000000UL;
	printf("Number is %lu",i);
	return 0;
}