// Name: polynomial.c
// Purpose: To evaluate a polynomial
// Author: Dilsher Singh
// Date: 2025/01/17

#include <stdio.h>

int main(void)
{
  int x;
  printf("Enter x: ");
  scanf("%d", &x);

  int eqn = (3 * x * x * x * x * x) +
            (2 * x * x * x * x) - 
            (5 * x * x * x) -
            (x * x) + (7 * x) - 6;
  printf("Answer: %d\n", eqn);
  return 0;
}