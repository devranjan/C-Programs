// C program for to find the biggest of three numbers.

#include<stdio.h>

int main()
{
  int num1, num2, num3;

  printf("\n Enter the values of num1, num2 and num3: ");
  scanf("%d %d %d", &num1, &num2, &num3);
  printf("num1=%d\tnum=%d\tnum3=%d\n", num1,num2,num3);

  if (num1>num2)
  {
    if (num1>num3)
    {
      printf("\n num1(%d) is the greatest among three.", num1);
    }
    else
    {
      printf("\n num3(%d) is the greatest among three.", num3);
    }
  }
  else if (num2>num3)
   printf("\n num2(%d)is the greatest among three.", num2);
  else
   printf("\n num3(%d) is the greatest among three.", num3);
}
