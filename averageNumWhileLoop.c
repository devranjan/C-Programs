// C program for to find average of n numbers using while loop. 
#include <stdio.h>

int main()
{
  int n, i;
  float sum = 0, num;

  printf("Enter number of eleents: ");
  scanf("%d", &n);
  printf("\n Enter %d elements: ", n);

  i=0;
  while(i<n)
  {
    scanf("%f", &num);
    sum = sum+num;
    i++;
  }

  printf("\n Averege of the entered numbers is: %f", (sum/n));
  return 0;
}
