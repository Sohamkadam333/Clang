// Author: Soham Kadam
// Date: 5-8-24_11:09PM
// 5_format_specifier.c

#include <stdio.h>

int main(void)
{
  printf("65 -> %%c = %c\n", 65);   // ASCII value of 65 // A
  printf("65 -> %%i = %i\n", 65);   // 65 // signed integer
  printf("65 -> %%d = %d\n", 65);   // 65 // signed integer
  printf("65 -> %%o = %o\n", 65);   // 101 // Octal
  printf("-10 -> %%u = %o\n", -10); // 37777777766 // unsigned integer in decimal
  printf("65 -> %%x = %x\n", 65);   // 41 // unsigned integer hexadecimal containing small hex letters
  printf("65 -> %%X = %X\n", 65);   // 41 // unsigned integer hex containing capital hex letters

  printf("1000 -> %%ld = %ld\n", 1000);   // 1000 // signed long
  printf("1000 -> %%hd = %hd d\n", 1000); // 1000 d // signed short // output gets suffix with d.

  printf("1000 -> %%lu = %lu\n", 1000);   // 1000 // unsigned long
  printf("1000 -> %%hu = %hu d\n", 1000); // 1000 d // unsigned short // output gets suffix with d.

  printf("87.34 -> %%f = %f\n", 87.34);                 // 87.340000
  printf("87.34 -> %%f = %.2f\n", 87.34);               // 87.34
  printf("87.34 -> %%e = %e\n", 87.34);                 // 8.734000e+001 // singed single precision float in exponent form containing small letter 'e'
  printf("87.34 -> %%E = %E\n", 87.34);                 // 8.734000E+001 // singed single precision float in exponent form containing small letter 'E'
  printf("6561.544 -> %%g = %g\n", 6561.544);           // 6561.54 // signed value in either e or f form
  printf("6561.544 -> %%G = %G\n", 6561.544);           // 6561.54 // signed value in either E or f form
  printf("894.56454636 -> %%lf = %lf\n", 894.56454636); // 894.564546 // signed double precision floating point
  printf("Hello my name is %s\n", "Soham");             // String (char array/ char pointer)

  int iNo1 = 10;
  printf("iNo1 -> %%p = %p\n", iNo1); // 000000000000000A // Pointer / Address

  return 0;
}