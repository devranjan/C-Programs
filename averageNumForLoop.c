// C program for to find average of n numbers using for loop. 
#include <stdio.h>

int main()
{
  int n, i;
  float sum = 0, num;

  printf("Enter number of eleents: ");
  scanf("%d", &n);
  printf("\n Enter %d elements: ", n);

  for (i=0; i<n; i++)
  {
    scanf("%f", &num);
    sum = sum+num;
  }

  printf("\n Averege of the entered numbers is: %f", (sum/n));
  return 0;
}
