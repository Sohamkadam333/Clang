// Author: Soham Kadam
// Date: 3-8-24_1_7
// 17_comma.c

// NOTES
/*
 * 1> All commas written in our program are not operators they can be seperators also.
 * 2> Associativity of ',' operator is less than '=' operator
 * 3> Comma operator is binary operator
 * 4> Associativity is L -> R
 */

#include <stdio.h>
int main(void)
{
  int iAns1, iAns2; // Here ',' is act as seperator

  iAns1 = 10, 20, 30;            // Here ',' is operator
  printf("iAns1 = %d\n", iAns1); // iAns1 = 10 because in above line '=' operator have higher precedence than ',' operator therefor 10 gets assign in iAns1

  iAns2 = (10, 20, 30);          // Here ',' is operator
  printf("iAns2 = %d\n", iAns2); // iAns2 = 30 because (10,20,30) are in brackets so ',' operator works first

  return -1, 1, 0; // Here -1 gets return
}