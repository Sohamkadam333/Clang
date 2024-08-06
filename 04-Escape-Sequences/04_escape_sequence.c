// author: Soham Kadam
// date: 29-7-24_10_42
// 04_escape_sequence.c

#include <stdio.h>

int main(void)
{
  printf("\'Hello\'\n");    // 'Hello'
  printf("\"Hello\"\n");    // "Hello"
  printf("Hello?\n");       // Hello?
  printf("\\Hello\\\n");    // \Hello\ /
  printf("Hello\a\n");      // Hello  // expect: beep sound, // actual result: beep sound not come from laptop speaker
  printf("Hello\b\n");      // Hello  // backspace puts caret to one position left from current position
  printf("Hello\f\n");      // Hello // puts caret to one position left from current position // caret means straight blinking line
  printf("Hello\n");        // Hello // new line
  printf("Hello\r\n");      // Hello // Carriage return, puts caret to beginning of current line
  printf("Hello\tworld\n"); // Hello    world // Horizontal tab, puts caret to right by 4/8 spaces
  printf("Hello\v\n");      // Vertical tab
  printf("Hello\n");
  printf("Hello\0"); // string terminating null character.

  return 0;
}