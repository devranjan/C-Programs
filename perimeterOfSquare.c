// C program to calculate perimeter of a square

#include<stdio.h>

int main()
{
  float side, perimeter;

  printf("\n Enter length of side of square: ");
  scanf("%f", &side);

  //Perimeter of square = 4*side
  perimeter = 4*side;
  printf("\n Perimeter of square: %f", perimeter);

  return 0;
}
