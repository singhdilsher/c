// Name: dollars.c
// Purpose: To calculate tax
// Author: Dilsher Singh
// Date: 2025/01/17

#include <stdio.h>

int main(void)
{
  float amount;
  printf("Enter a dollar-and-cents amount: ");
  scanf("%f", &amount);

  float percentTax = 5;
  float finalAmount = amount * (1 + (percentTax / 100));
  printf("You final amount inc. tax is: %.2f\n", finalAmount);
  return 0;
}