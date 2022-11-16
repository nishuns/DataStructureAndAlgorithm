// date calculator
/**
 * Jan 0
 * Feb 3
 * March 3
 * April 6
 * May 1
 * June 4
 * July 6
 * August 2
 * September 5
 * October 0
 * November 3
 * December 5
 */
#include <stdio.h>

int main()
{
  int year;

  printf("Enter the year:\n>");
  scanf("%d", &year);

  int number_of_years, number_of_leap_years, number_of_days, weekDay;
  number_of_leap_years = (year - 01) / 4;
  number_of_years = (year - 01) - number_of_leap_years;
  number_of_days = (number_of_years * 365) + (number_of_leap_years * 366);
  weekDay = (number_of_days % 7) + 1;
  if (weekDay == 1)
  {
    printf("it's Monday");
  }
  else if (weekDay == 2)
  {
    printf("it's Tuesday");
  }
  else if (weekDay == 3)
  {
    printf("it's Wednesday");
  }
  else if (weekDay == 4)
  {
    printf("it's Thursday");
  }
  else if (weekDay == 5)
  {
    printf("it's friday");
  }
  else if (weekDay == 6)
  {
    printf("it's saturday");
  }
  else
  {
    printf("it's Sunday");
  }
}