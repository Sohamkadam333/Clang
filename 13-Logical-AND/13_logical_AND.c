// author: Soham Kadam
// date: 1-8-24_11_36
// 13_logical_AND.c

/*
 * 1> Working of logical AND
 * 2> (10 < 20) && (5 < 10), if result of 1st operation is true then check result of 2nd operation
 * 3> (10 > 20) && (5 < 10), if result of 1st operation is false then dont check 2nd operation   // *SHORT CIRCUTING*
 */

#include <stdio.h>
int main(void)
{
  int iNo1 = 0;
  int iNo2 = 1;
  int iNo3 = 2;
  int iAns;

  iAns = iNo1 && ++iNo2 && iNo3++;
  printf("0 && ++1 && 2++ = %d\n", iAns); // 0
  printf("iNo1 = %d\n", iNo1);            // 0
  printf("iNo2 = %d\n", iNo2);            // 1
  printf("iNo3 = %d\n", iNo3);            // 2

  /*
   * iNo1 && ++iNo2 && iNo3++;
   *  0 && ++1 && 2++;  // ++ have higher precedence than &&
   *  0 && ++1 && 2++;   // ++1 is second operand of second && and first operand of second &&
   * precedence is same due to associativity L->R 2 will bind with first &&
   * (0 && 2) && 2++; // 0 && 2++  // first operand is false so it will not go to 2++
   */

  return 0;
}