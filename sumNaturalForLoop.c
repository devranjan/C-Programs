// C program to find the sum of first n Natural numbers using for loop

#include <stdio.h>

int main()
{
  int n, count, sum =0;

  printf("\n Enter the value of n (positive integers): ");
  scanf("%d", &n);

  for (count = 1; count<=n; count++)

  {
    sum = sum + count;
  }
  printf("sum of first %d natural numbers is: %d", n, sum);
  return 0;
}
