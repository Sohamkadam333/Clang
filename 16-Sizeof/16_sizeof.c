// Author: Soham Kadam
// Date: 04-8-24
// 16_sizeof.c

// NOTES
/*
 * 1> 'sizeof' operator outputs size of its operand
 * 2> 'sizeof' is concerned with size not memory
 */

#include <stdio.h>
int main(void)
{
  int iNo1 = 10;
  char chChar = 'A';
  float fNo1 = 55.33f;
  float fNo2 = 452.46;
  double dNo1 = 5446.5345;

  printf("sizeof(int) = %d\n", sizeof(int));       // 4
  printf("sizeof(char) = %d\n", sizeof(char));     // 1
  printf("sizeof(float) = %d\n", sizeof(float));   // 4
  printf("sizeof(double) = %d\n", sizeof(double)); // 8

  printf("sizeof(iNo1) = %d\n", sizeof(iNo1));     // 4
  printf("sizeof(chChar) = %d\n", sizeof(chChar)); // 1
  printf("sizeof(fNo1) = %d\n", sizeof(fNo1));     // 4
  printf("sizeof(fNo2) = %d\n", sizeof(fNo2));     // 4
  printf("sizeof(dNo1) = %d\n", sizeof(dNo1));     // 8

  printf("sizeof(20) = %d\n", sizeof(20));         // 4
  printf("sizeof('z') = %d\n", sizeof('z'));       // 4  // In C character literal are treated as int.
  printf("sizeof(99.99) = %d\n", sizeof(99.99));   // 8  // In C all floating point literal are treadted as double by default.
  printf("sizeof(99.999) = %d\n", sizeof(9.999f)); // 4  // suffix with 'f' now C will treat it as float point literal

  printf("sizeof 10 = %d\n", sizeof 10);    // 4
  printf("sizeof iNo = %d\n", sizeof iNo1); // 4
  // printf("sizeof int\n", sizeof int);    // This line will give error

  printf("iNo1 = %d\n", iNo1);                     // 10
  printf("sizeof(++iNo1) = %d\n", sizeof(++iNo1)); // 4  // sizeof operator do not physically solve // sizeof is keyword so it is compiler dependent // At compile time iNo1 do not have memory so it cannot sole expression
  printf("iNo1 = %d\n", iNo1);                     // expected: 11 // result: 10
  printf("sizeof(void) = %d\n", sizeof(void));     // 0 or 1 compiler dependent

  return 0;
}