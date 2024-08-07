// Author: Soham Kadam
// Date: 7-8-24_8:08PM
// 08_modulus.c

// NOTES
/*
 * 1> It returns remainder as result.
 * 2> Sign of its result is depend on numerator only
 * + % + = +
 * + % - = +
 * - % + = -
 * - % - = -
 */

#include <stdio.h>
int main(void)
{
  printf("%d %% %d = %d\n", 9, 2, 9 % 2);     // 1
  printf("%d %% %d = %d\n", 9, -2, 9 % -2);   // 1
  printf("%d %% %d = %d\n", -9, 2, -9 % 2);   // -1
  printf("%d %% %d = %d\n", -9, -2, -9 % -2); // -1
  return 0;
}