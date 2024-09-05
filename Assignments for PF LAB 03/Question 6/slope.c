/*
ROLL NO: 24k-0033
Construct a C program where you calculate the slope of two point (5,4), (3,2). Use format
specifiers to cap the result to 3 decimal places.
*/
#include<stdio.h>

int main(){
    //For calculating slope, we need m for slope, x1,y1 and x2,y2 for points as given in the question. We simply take them as integers int.
    int x1,x2,y1,y2;
    float m;
    
    //Put values in the variables
    x1=5;
    y1=4;
    x2=3;
    y2=2;
    
   //As we know the formula for calculating the slope
   m=(y2-y1)/(x2-x1);
   printf("The slope is %.3f", m);
}