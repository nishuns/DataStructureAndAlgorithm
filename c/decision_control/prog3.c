/**
 * Q: If the cost of selling price of an item is input through the keyboard, write a program to determine whether the seller has made
 *    profit or incurred loss. Also determine how much profit he made or loss he incurred.
 */

#include <stdio.h>

int main()
{
  float cost_prize, selling_prize;

  printf("Enter the cost prize:\n>");
  scanf("%f", &cost_prize);
  printf("Enter the selling prize:\n>");
  scanf("%f", &selling_prize);

  // logic
  if (cost_prize > selling_prize)
  {
    printf("Oh! You have made a huge loss of %.2f inr.\n", cost_prize - selling_prize);
  }
  else
  {
    printf("Boom! You have made a profit %.2f inr.\n", selling_prize - cost_prize);
  }
}