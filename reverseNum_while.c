//Reverse a given number using while loop

#include <stdio.h>

int main()
{
  int num, rem, reverse_num=0;

  //input number from user.
  printf("\n Please enter some numbers: ");
  scanf("%d", &num);

  while (num>=1)
  {
    rem = num % 10;
    reverse_num = reverse_num*10 + rem;
    num = num/10;
  }
  printf("\n Reverse of the input number is: %d", reverse_num);
  return 0;
}
