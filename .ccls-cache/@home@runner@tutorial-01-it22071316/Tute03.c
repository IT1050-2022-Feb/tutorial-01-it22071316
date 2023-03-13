/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() 
{
  //declaration of two integer variables
  int num, sum;
  
  printf("Enter number : ");    //prompt user
    scanf("%d",&num);    //reads input

  while(num > 0)
    {
      sum = sum + num;     //calculation
    }

  printf("Sum : %d",sum);    //output
  return 0;
}

