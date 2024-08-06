// Author: Soham Kadam
// Date: 3-8-24_12_45
// 18_binding_order_POC.c

// NOTES
/*
 * 1> Solving order is decided by Associativity.
 * 2> Binding order is decided by Precedence.
 */

#include <stdio.h>
int main(void)
{
  int iNo1 = 0;
  int iNo2 = 1;
  int iNo3 = 2;
  int iAns;

  iAns = ++iNo1 || ++iNo2 && iNo3++;
  printf("%d %d %d %d\n", iNo1, iNo2, iNo3, iAns);
  return 0;
}

/*
iAns = ++iNo1 || ++iNo2 && iNo3++;
iAns = ++iNo1 || (++iNo2 && iNo3++); // ++iNo2 gets bind with with && because && precedence is higher than ||
iAns = (++iNo1 || (++iNo2 && iNo3++)); // L->R
iAns = 1 || ++1 && 2++ // Here first expression of || is true so due to short circuting it will not check for second expression.
iNo1 = 1
iNo2 = 1
iNo3 = 2
iAns = 1
*/