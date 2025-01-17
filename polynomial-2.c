// Name: polynomial-2.c
// Purpose: To evaluate a polynomial using horner's rule
// Author: Dilsher Singh
// Date: 2025/01/17

#include <stdio.h>

int main(void)
{
  int x;
  printf("Enter x: ");
  scanf("%d", &x);

  int eqn = (((((((((3 * x) + 2) * x) - 5) * x) - 1) * x) + 7) * x) - 6;
  printf("Answer: %d\n", eqn);
  return 0;
}