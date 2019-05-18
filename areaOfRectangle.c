// C program to calculate area of a Rectangle

#include<stdio.h>

int main()
{
  float length, width, area;
  printf("\n Enter lenght of rectange: ");
  scanf("%f", &length);
  printf("\n Enter the width of the rectangle: ");
  scanf("%f", &width);

  //Area of rectangle = Length * width
  area= length * width;
  printf("\n Area of the rectange is: %f", area);

  return 0;
}
