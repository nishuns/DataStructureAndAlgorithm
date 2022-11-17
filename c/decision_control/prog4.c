/**
 * Q: Any integer is input through the keyboard. Write a program to find out
 *    whether it is an odd number or even number.
 */

#include <stdio.h>

int main()
{

  int num;
  printf("Enter the number:\n>");
  scanf("%d", &num);

  // logic
  if (num % 2 == 0)
  {
    printf("Woah! Entered number is even\n");
  }
  else
  {
    printf("Aah! Entered number is odd\n");
  }
}