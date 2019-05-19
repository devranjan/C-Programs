// C program for to check whether number is even or odd. 
#include <stdio.h>

int main()
{
  int n;

  printf("\n Enter number to check to check Even or Odd: ");
  scanf("%d", &n);

  //Modulus (%) returns remiander.
  if (n%2==0)
  {
    if (n==0)
    printf("\n %d is zero", n);

    else
    printf("\n %d is an even number", n);
  }
  else
  printf("\n %d is an odd number", n);

  return 0;
}
