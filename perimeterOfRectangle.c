// C program to calculate perimeter of a Rectangle

#include<stdio.h>

int main()
{
  float length, width, perimeter;
  printf("\n Enter lenght of rectange: ");
  scanf("%f", &length);
  printf("\n Enter the width of the rectangle: ");
  scanf("%f", &width);

  //Perimeter of rectangle = 2 * (Length + Width)
  perimeter= 2*(length + width);
  printf("\n Perimeter of the rectange is: %f", perimeter);

  return 0;
}
