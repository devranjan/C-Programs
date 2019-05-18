//C Program to check whether the given integer is positive or negative

#include <stdio.h>

int main()
{
  int num;

  printf("Enter a number here: \n");
  scanf("%d", &num);

  if (num>0)
    printf("%d is a positive number \n", num);
  else if(num<0)
    printf("%d is a negetive number \n", num);
  else
    printf("0 is neither positive or negetive.");
}
