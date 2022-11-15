// Program to check where the given 3 points are colinear or not

#include <stdio.h>

// slope cal
int slope(int x1, int y1, int x2, int y2);

int main()
{
  float x1, y1, x2, y2, x3, y3;
  float m1, m2, m3;

  printf("Enter the coordinates of 1st point: \n>");
  scanf("%f %f", &x1, &y1);
  printf("Enter the coordinates of 2nd point: \n>");
  scanf("%f %f", &x2, &y2);
  printf("Enter the coordinates of 3rd point: \n>");
  scanf("%f %f", &x3, &y3);

  m1 = slope(x1, y1, x2, y2);
  m2 = slope(x2, y2, x3, y3);
  m3 = slope(x1, y1, x3, y3);

  if (m1 == m2 && m1 == m3 && m2 == m3)
  {
    printf("Say it! We are in same line");
  }
  else
  {
    printf("Say it! We are not");
  }
}

int slope(int x1, int y1, int x2, int y2)
{
  float m;
  m = (y2 - y1) / (x2 - x1);
  return m;
}