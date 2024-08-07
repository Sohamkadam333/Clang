// Author: Soham Kadam
// Date: 7-8-24_8:28PM
// 09_increment.c

// NOTES
/*
 * ++
 * 1> Adding value by 1 and assigning to itself.
 * 2> There are 2 forms of increment operator
 * 3> ++a, a++
 * 4> PreIncrement
 * Increment first then give result, result is incremented value
 * 5> PostIncrement
 * Give result first then increment, result is old value.
 */

#include <stdio.h>
int main(void)
{
  int iNo = 10;
  int iAns1;
  int iAns2;

  printf("iNo = %d\n", iNo); // 10;

  iAns1 = iNo++;
  printf("iAns1 = %d\n", iAns1); // 10
  printf("iNo = %d\n", iNo);     // 11

  iAns2 = ++iNo;
  printf("iNo = %d\n", iNo);     // 12
  printf("iAns2 = %d\n", iAns2); // 12

  printf("++iNo = %d\n", ++iNo); // 13
  printf("iNo = %d\n", iNo);     // 13

  printf("iNo++ = %d\n", iNo++); // 13
  printf("iNo = %d\n", iNo);     // 14

  printf("+ +iNo = %d\n", + +iNo); // 14
  printf("iNo = %d\n", iNo);       // 14

  printf("iNo + 1 = %d\n", iNo + 1); // 15
  printf("iNo = %d\n", iNo);         // 14

  // printf("++10 = %d\n", ++10);    // error // 10 = 10 + 1 // lvalue required as increment operand
  // printf("10++ = %d\n", (10 ++)); // error // 10 = 10 + 1 // lvalue required as increment operand

  return 0;
}
