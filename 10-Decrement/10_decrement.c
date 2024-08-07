// Author: Soham Kadam
// Date: 7-8-24_8:48PM
// 10_decrement.c

// NOTES
/*
 * 1> Decrement value by 1 and assign to itself
 * 2> There are 2 forms of decrement operator
 * 3> --a, a--
 * 4> PreDecrement
 * Decrement first then give result, result is Decremented value
 * 5> PostDecrement
 * Give result first then Decrement by 1, result is old value.
 */

#include <stdio.h>
int main(void)
{
  int iAns;
  int iNo = 10;

  printf("iNo = %d\n", iNo); // 10

  iAns = --iNo;
  printf("iAns = %d\n", iAns); // 9
  printf("iNo = %d\n", iNo);   // 9

  iAns = iNo--;
  printf("iAns = %d\n", iAns); // 9
  printf("iNo = %d\n", iNo);   // 8

  iAns = iNo--;
  printf("iAns = %d\n", iAns); // 8
  printf("iNo = %d\n", iNo);   // 7

  printf("iNo-- = %d\n", iNo--); // 7
  printf("iNo = %d\n", iNo);     // 6

  iAns = --iNo;
  printf("iAns = %d\n", iAns); // 5
  printf("iNo = %d\n", iNo);   // 5

  printf("--iNo = %d\n", --iNo); // 4
  printf("iNo = %d\n", iNo);     // 4

  return 0;
}