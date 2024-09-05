/*A customer asks the IT firm to develop a program in C language, which can take tax rate and
salary from the user on runtime and then calculate the tax, the user has to pay and the salary
he/she will have after paying the tax. This information is then provided to the user.*/


#include<stdio.h>

int main(){
// Input your salary and taxrate 
// float is used so we can assume taxrate in decimal too
	float sal, txr;
	printf("Enter the salary: ");
	scanf("%f",&sal);
	printf("Enter the taxrate: ");
	scanf("%f", &txr);
	
// Inputting from user is done. Using formula for taxrate (txr) 
// declaring new variables for total tax and the total salary after the tax
	float tax, saltax;
	tax = (txr/100)*sal;
	saltax=sal-tax;
// Printing the results
	printf("Total Salary: %f\n", sal);
	printf("Total Tax-rate: %f\n", txr);
	printf("Total tax you have to pay: %.2f\n", tax);
	printf("Salary after tax: %.2f\n", saltax);
	return 0;
	
}