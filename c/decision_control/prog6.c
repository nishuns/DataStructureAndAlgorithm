/**
 * Q: A five digit number is entered through the keyboard. Write a program to obtain the
 *    reversed number and to determine whether the original and reversed numbers are equal
 *    or not.
 */

#include <stdio.h>

int main()
{
  int num, temp, rev = 0;

  printf("Enter the number:\n>");
  scanf("%d", &num);

  // logic
  temp = num;
  while (1)
  {
    if (temp != 0)
    {
      rev += temp % 10;
      temp /= 10;
      if (temp > 0)
      {
        rev *= 10;
      }
      else
      {
        break;
      }
    }
  }
  if (num == rev)
  {
    printf("Aww! These are equal");
  }
  else
  {
    printf("Fuck! These are not");
  }
}