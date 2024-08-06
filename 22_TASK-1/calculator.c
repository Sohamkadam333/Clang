// Author: Soham Kadam
// Date: 6-8-24_11:22PM
// calculator.c

#include "calculator.h"

int main(void)
{
  int iNo1;
  int iNo2;
  int iAns;
  int iChoice;
  int iResult;

  printf("Enter:\n1 for Addition\n2 for Subtraction\n3 for Multiplication\n4 for Division\n5 for Modulus\n");
  scanf("%d", &iChoice);

  if (iChoice >= 1 && iChoice <= 5)
  {
    printf("Enter two numbers: ");
    scanf("%d%d", &iNo1, &iNo2);

    switch (iChoice)
    {
    case 1:
    {
      iResult = Addition(iNo1, iNo2);
      printf("%d + %d = %d\n", iNo1, iNo2, iResult);
      break;
    }
    case 2:
    {
      iResult = Subtraction(iNo1, iNo2);
      printf("%d - %d = %d\n", iNo1, iNo2, iResult);
      break;
    }
    case 3:
    {
      iResult = Multiplication(iNo1, iNo2);
      printf("%d * %d = %d\n", iNo1, iNo2, iResult);
      break;
    }
    case 4:
    {
      iResult = Division(iNo1, iNo2);
      printf("%d / %d = %d\n", iNo1, iNo2, iResult);
      break;
    }
    case 5:
    {
      iResult = Modulus(iNo1, iNo2);
      printf("%d %% %d = %d\n", iNo1, iNo2, iResult);
      break;
    }
    }
  }
  else
  {
    printf("Invalid Choice");
  }

  return 0;
}

int Addition(int iNo1, int iNo2)
{
  return iNo1 + iNo2;
}

int Subtraction(int iNo1, int iNo2)
{
  return iNo1 - iNo2;
}

int Multiplication(int iNo1, int iNo2)
{
  return iNo1 * iNo2;
}

int Division(int iNo1, int iNo2)
{
  return iNo1 / iNo2;
}

int Modulus(int iNo1, int iNo2)
{
  return iNo1 % iNo2;
}
