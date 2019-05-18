// C program to calculate area of a square

#include<stdio.h>

int main()
{
  float side, area;

  printf("\n Enter length of side if square: ");
  scanf("%f", &side);

  //Area of square = side*side
  area = side*side;
  printf("\n Area of square: %f", area);

  return 0;
}
