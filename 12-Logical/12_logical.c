// author: Soham Kadam
// date: 1-8-24_11_08
// 12_logical.c

/*
 * 1> Logical NOT (!) Precedence Level 1, R->L
 * 2> Logical AND (&&) Precedence Level 2, L->R
 * 3> Logical OR (||) Precedence Level 3, L->R
 * 4> These Operator consider their operands as boolean values and return result in boolean value
 */

#include <stdio.h>
int main(void)
{
  int iAns;

  iAns = 1 && 1;
  printf("1 && 1 = %d\n", iAns); // 1

  iAns = 1 && 0;
  printf("1 && 0 = %d\n", iAns); // 0

  iAns = 0 && 1;
  printf("0 && 1 = %d\n", iAns); // 0

  iAns = 1 || 1;
  printf("1 || 1 = %d\n", iAns); // 1

  iAns = 1 || 0;
  printf("1 || 0 = %d\n", iAns); // 1

  iAns = 0 || 1;
  printf("0 || 1 = %d\n", iAns); // 1

  iAns = !10;
  printf("!10 = %d\n", iAns); // 0

  iAns = !0;
  printf("!0 = %d\n", iAns); // 1

  return 0;
}