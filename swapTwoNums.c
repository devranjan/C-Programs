// C program for to swap two numbers/variables.

#include<stdio.h>

int main()
{
  int firstNum, secondNum, temp;

  printf("\n Please enter two numners: ");
  scanf("%d %d", &firstNum, &secondNum);
  printf("First Number: %d\nSecond Number: %d\n", firstNum, secondNum);

  //swapping firstNum and secondNum usning a third variable (temp)
  temp=firstNum;
  firstNum=secondNum;
  secondNum=temp;

  printf("\n Agter swap\n");
  printf("First Number: %d\nSecond Number: %d\n", firstNum, secondNum);

  return 0;
}
