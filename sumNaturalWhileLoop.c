// C program to find the sum of first n Natural numbers using while loop

#include <stdio.h>

int main()
{
  int n, count, sum=0;
  printf("\n Enter the value of n (Positive numbers only): ");
  scanf("%d", &n);

  count = 1;
  while (count<=n){
    sum = sum + count;
    count++;
  } 

  printf("Sum of first %d numbers is: %d", n, sum);
  return 0;
}
