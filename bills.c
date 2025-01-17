// Name: bills.c
// Purpose: To calculate min. number of bills needed
// Author: Dilsher Singh
// Date: 2025/01/17

#include <stdio.h>

int main(void)
{
  int dollars;
  printf("Enter the dollar amount: ");
  scanf("%d", &dollars);

  int mod20 = dollars % 20;
  int mod10 = mod20 % 10;   // mod used because only remainder is left to be paid
  int mod5 = mod10 % 5;
  
  int _20DollarBills = (dollars - mod20) / 20;
  int _10DollarBills = (mod20 - mod10) / 10;
  int _5DollarBills = (mod10 - mod5) / 5;
  int _1DollarBills = mod5;

  printf("# of $20 bills: %d\n", _20DollarBills);
  printf("# of $10 bills: %d\n", _10DollarBills);
  printf("# of $5 bills: %d\n", _5DollarBills);
  printf("# of $1 bills: %d\n", _1DollarBills);
  
  return 0;
}