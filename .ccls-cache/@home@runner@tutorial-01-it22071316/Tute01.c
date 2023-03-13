/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
//start of main function execution
int main() {

  //declaration of three float variables
  float mark1, mark2, avg ;
  
  printf("Enter marks for subject 1 : ");    //prompt user input mark1
    scanf("%f",&mark1);    //reads mark1

  printf("Enter marks for subject 2 : ");    //promt user input mark2
    scanf("%f",&mark2);  //reads mark2

  avg = (mark1 + mark2) / 2.0 ;    //calculation of average

  printf("Your average is %.2f",avg);    //output 
  
  return 0;
}//end main function


