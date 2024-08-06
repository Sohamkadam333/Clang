// author: Soham Kadam
// date: 1-8-24_10_21
// 11_relational.c

/*
 * 1> All Relational Operators are Binary Operators
 * 2> Level 1 Precedence (<,>,<=,>=)
 * 3> Level 2 Precedence (==,!=)
 * 4> Both have Associativity L->R
 */

#include <stdio.h>
int main(void)
{
  int iAns;

  iAns = 10 < 20;
  printf("10 < 20 = %d\n", iAns); // 1

  iAns = 10 > 20;
  printf("10 > 20 = %d\n", iAns); // 0

  iAns = 10 <= 20;
  printf("10 <= 20 = %d\n", iAns); // 1

  iAns = 10 >= 20;
  printf("10 >= 20 = %d\n", iAns); // 0

  iAns = 10 == 20;
  printf("10 == 20 = %d\n", iAns); // 0

  iAns = 10 != 20;
  printf("10 != 20 = %d\n", iAns); // 1

  iAns = 10 < 20 != 1;
  printf("10 < 20 != 1 = %d\n", iAns); // 0

  iAns = 10 > 20 == 1;
  printf("10 > 20 == 1 = %d\n", iAns); // 0

  iAns = 10 == 20 < 1;
  printf("10 == 20 < 1 = %d\n", iAns); // 0

  iAns = 10 < 1 == 20;
  printf("10 < 1 == 20 = %d\n", iAns); // 0
  return 0;
}