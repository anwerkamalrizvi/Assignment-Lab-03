/*
* Roll NO:- 24k-0033
A car travelled back and forth from point A to point B. With a distance being (single trip)
1207KM. During the forward trip fuel price was 118/liter while returning it was 123/liter.
Calculate the total fuel cost (both ways) and the fuel consumed (total trip). Use the car’s fuel
average as input from the user (Input must be positive make some restrictions on only accepting
positive input)
*/

#include<stdio.h>

int main(){
   //declaring distance (dis), forward fuel price (ffp), backward fuel prise (bfp) and the average fuel price (avgf)
   //Inputting values as given in the Q.
   float dis=1207.0;
   float ffp=118.0;
   float bfp=123.0;
   float avgf;
   printf("Enter value of car's average fuel: ");
   scanf("%f", &avgf);
   //Using if statement to avoid invalid input
   if(avgf<=0){
	printf("Invalid Input!");
   }//End if
   
   //For both the distances back and forth, we multiply distance by 2. Total distance is declared as td
   float td;
   td=dis*2;
   // Fuel consumed will be declared as fc
   float fc;
   fc=td/avgf;

   //Finally, we are calculating the total fuel cost in both the forward and backward position of the car.
   //Declaring fc2 for forward cost and bc for backward cost and the total cost tc. Using formula:-
   double fc2;
   fc2=(dis/avgf)*ffp;
   double bc;
   bc=(dis/avgf)*bfp;
   double tc=bc+fc;
   
   //Finally, the output of total fuel consumed in both the trip and total cost of the fuel.
   printf("\nTotal fuel consumed in both the trips: %.2f Litres",fc );
   printf("\nTotal fuel cost in both the trips: %.2f Rupees",tc);

   return 0;
   
   
}//End main