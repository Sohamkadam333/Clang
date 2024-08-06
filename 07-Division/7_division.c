// author: Soham Kadam
// date: 29-7-24_11_00
// 7_division.c

/*
DIVISION OPERATOR (/)
1. It gives quotient as result
2. Sign of its result is depend on sign of both numerator and denominator
+ / + = +
+ / - = -
- / + = -
- / - = +
*/

#include <stdio.h>
int main(void)
{
  printf("%d / %d = %d\n", 9, 2, 9 / 2);     // 9 / 2 = 4
  printf("%d / %d = %d\n", 9, -2, 9 / -2);   // 9 / -2 = -4
  printf("%d / %d = %d\n", -9, 2, -9 / 2);   // -9 / 2 = -4
  printf("%d / %d = %d\n", -9, -2, -9 / -2); // -9 / -2 = 4
  return 0;
}