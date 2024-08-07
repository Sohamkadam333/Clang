// Author: Soham Kadam
// Date: 07-8-24_8:00PM
// 06_promotion_demotion.c

int main(void)
{
  int iAns;
  iAns = 2 * 3.25 + (5 / 2);
  printf("2 * 3.25 + (5 / 2) = %d\n", iAns);

  /*
   * iAns = 2 * 3.25 + (5 / 2);
   * iAns = (2 * 3.25) + (5 / 2); // Promotion of 2 to 2.00
   * iAns = (6.50) + 2
   * iAns = 8.50
   * iAns = 8  // Demotion of 8.50 to 8
   */
  return 0;
}