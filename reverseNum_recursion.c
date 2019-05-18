//Reverse a given number using Recursion:

#include<stdio.h>

int main()
{
  int num, reverse_num;

// Users can input numbers.
  printf("\n Please any enter numbers: ");
  scanf("%d", &num);

  //Calling user defined function to perform reverse.
  reverse_num=reverse_func(num);
  printf("\n After reverse, the number is: %d", reverse_num);
  return 0;
}

int sum=0, rem;
reverse_func(int num)
{
  if (num)
  {
    rem=num%10;
    sum = sum*10+rem;
    reverse_func(num/10);
  }
  else
   return sum;
  return sum;
}
