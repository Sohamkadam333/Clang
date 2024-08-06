// Author:Soham Kadam
// Date: 5-8-24_10:33PM
// 03_short_long_char_int_float_double.c

#include <stdio.h>
int main(void)
{

  // ---------------- int ----------------
  printf("sizeof(int) = %d byte\n", sizeof(int));                     // 4
  printf("sizeof(short int) = %d byte\n", sizeof(short int));         // 2
  printf("sizeof(long int) = %d byte\n", sizeof(long int));           // 4
  printf("sizeof(long long int) = %d byte\n", sizeof(long long int)); // 8

  // ---------------- char ----------------
  printf("sizeof(char) = %d byte\n", sizeof(char)); // 1
  // printf("sizeof(short char) = %d byte\n", sizeof(short char));
  /*
  warning: invalid combination of type specifiersC/C++(84)
  error: both 'short' and 'char' in declaration specifiers
  */

  // printf("sizeof(long char) = %d byte\n", sizeof(long char));
  /*
  warning: invalid combination of type specifiersC/C++(84)
  error: both 'long' and 'char' in declaration specifiers
  */

  // printf("sizeof(long long char) = %d byte\n", sizeof(long long char));
  /*
  warning: invalid combination of type specifiersC/C++(84)
  error: both 'long' and 'char' in declaration specifiers
  */

  // ---------------- float ----------------
  printf("sizeof(float) = %d byte\n", sizeof(float)); // 4

  // printf("sizeof(short float) = %d byte\n", sizeof(short float));
  /*
  warning: invalid combination of type specifiersC/C++(84)
  error: both 'short' and 'float' in declaration specifiers
  */

  // printf("sizeof(long float) = %d byte\n", sizeof(long float));
  /*
  warning: invalid combination of type specifiersC/C++(84)
  error: both 'long' and 'float' in declaration specifiers
  */

  // printf("sizeof(long long float) = %d byte\n", sizeof(long long float));
  // error: error: both 'long' and 'float' in declaration specifiers

  // ---------------- double ----------------

  printf("sizeof(double) = %d byte\n", sizeof(double)); // 8

  // printf("sizeof(short double) = %d byte\n", sizeof(short double));
  // error: error: both 'short' and 'double' in declaration specifiers

  printf("sizeof(long double) = %d byte\n", sizeof(long double)); // 16

  // printf("sizeof(long long double) = %d byte\n", sizeof(long long double));
  // error both 'long long' and 'double' in declaration specifiers

  return 0;
}