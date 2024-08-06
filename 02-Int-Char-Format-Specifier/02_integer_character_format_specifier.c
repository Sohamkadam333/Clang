// Author: Soham Kadam
// Date: 5-8-24_7:51PM
// 2_integer_character_format_specifier.c

#include <stdio.h>
int main()
{
  char ch1 = 'A';
  char ch2 = 65;
  int no1 = 65;
  int no2 = 'A';

  char ch3 = ',';
  char ch4 = '!';

  printf("ch1 in character format = %c\n", ch1); // A
  printf("ch1 in integer format = %d\n", ch1);   // 65

  printf("ch2 in character format = %c\n", ch2); // A
  printf("ch2 in integer format = %d\n", ch2);   // 65

  printf("no1 in character format = %c\n", no1); // A
  printf("no1 in integer format = %d\n", no1);   // 65

  printf("no2 in character format = %c\n", no2); // A
  printf("no2 in integer format = %d\n", no2);   // 65

  printf("ch3 + ch4 in character format = %c\n", ch3 + ch4); // ASCII value of ',' + '!' = 44 + 33 = 77 // 77 in character = M
  printf("ch3 + ch4 in integer format = %d\n", ch3 + ch4);   // 77

  return 0;
}
