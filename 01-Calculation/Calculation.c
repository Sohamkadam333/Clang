// author: Sohamk
// Date: 20-7-24

#include "Calculation.h"

int main(void)
{
  int no1;
  int no2;
  int ans;

  printf("For addition,\nEnter two numbers :\t");
  scanf("%d%d",&no1,&no1);
  ans = no1+no2;
  printf("Addition is %d\n\n",ans);

  substraction();

  printf("Multiplication is %d\n\n",multiplication());

  printf("For division,\nEnter numerator :\t");
  scanf("%d",&no1);
  printf("Enter denominator: \t");
  scanf("%d",&no2);
  division(no1,no2);

  ans = modulus();
  printf("Modulus is %d\n\n",ans);
  return 0;
}


int multiplication(void)
{
  int no1;
  int no2;
  int ans;

  printf("For multiplication,\nEnter two numbers: \t");
  scanf("%d%d",&no1,&no2);
  ans = no1*no2;
  return ans;
}

int addition(int no1,int no2)
{
  return no1+no2;
}

int modulus(void)
{
  int numerator;
  int denominator;
  int remainder;

  printf("For modulus,\nEnter numerator: \t");
  scanf("%d",&numerator);
  printf("Enter denominator: \t");
  scanf("%d",&denominator);

  remainder = numerator % denominator;
  return remainder;
}

void substraction(void)
{
  int no1;
  int no2;
  int ans;

  printf("For Substraction,\nEnter two numbers:\t");
  scanf("%d%d",&no1,&no2);
  ans = no1-no2;

  printf("Substraction is %d\n\n",ans);
}


void division(int no1,int no2)
{
  printf("Quotient is %d\n\n",no1/no2);
}


