// Name: temperature.c
// Purpose: To convert farenheit to celsius
// Author: Dilsher Singh
// Date: 2025/01/12

#include <stdio.h>
#define FREEZING_PT 32.0f       // used for defining constants, optional
#define SCALE_FACTOR (5.0f/9.0f)

int main(void) 
{
  float fahrenheit, celsius;
  printf("Enter temperature in fahrenheit: ");
  scanf("%f", &fahrenheit);
  celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
  printf("Celsius equivalent: %.1f\n", celsius);
  return 0;
}