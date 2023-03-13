/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has traveled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>
//executing the start of main function
int main() {

  //declaration of two float variables
  float distance, amount ;
  
  printf("Enter the distance traveled : ");    //prompt user
    scanf("%f",&distance);    //read input

  //if selection start
  if(distance <= 30)
  {
    amount = distance * 50;
  }//end if function

  //start of else if function
  else if (distance > 30)
  {
    amount = 30 * 50 + (distance - 30) * 40;
  }//end of else if function

  printf("Total to be paid %.2f",amount);    //output 
  
  return 0;
}//end of main function
