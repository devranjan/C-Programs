// C program for to calculate square of a given number.

#include<stdio.h>

int main()
{
  int num, square;

  printf("\n Please enter a number to get square of that number: ");
  scanf("%d", &num);

  square= num*num;

  printf("\n Square of the given number %d is: %d", num, square);

  return 0;
}
