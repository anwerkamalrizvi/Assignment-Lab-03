/*
ROLL NO: 24k-0033
Construct a C program with the flowchart below. The input value of the principle must be
between 100 Rs. To 1,000,000 Rs. The Rate of interest must be between 5% to 10% and Time
Period must be between 1 to 10 years. Hint: these restrictions can be displayed in the form of
message on the window.
*/

#include<stdio.h>

int main(){
    //Input in Rupees rs
    float rs;
    printf("Enter value in Rupees: ");
    scanf("%f", &rs);
    if(rs<100){
	printf("Enter a valid input");
    }// end if
    else if(rs>1000000){
        printf("Too bigger number, Kindly enter a valid input!");
    }// end if else
    // Input interest rate ranging from 5 to 10 percent. Declare interest as in
    float in;
    printf("Enter value of interest rate in percent: ");
    scanf("%f", &in);
    if(in<5){
	printf("Enter a valid interest rate in 5 to 10 percent range");
    }// end if
    else if(in>10){
        printf("Kindly enter a valid interest rate! range: 5 to 10 percent");
    }// end if else
    // Now input the period in years
    //Declare years as y. If statement for range: 1 to 10 years    
    float y;
    printf("Enter period: ");
    scanf("%f", &y);
    if(y<1){
	printf("Period range is 1 to 10 years. Kindly enter a valid range!");
    }// end if
    else if(y>10){
        printf("Period range is 1 to 10 years. Kindly enter a valid range!");
    }// end if else
    
    //Interest formula, we should declare one variable for inputting it. hence inf for INterest Formula
    float inf=(in*rs*y)/100;
    
    //Finally, printing the output for the user.
    printf("Total interest is: %.2f",inf); 
    return 0;
    
}//end main