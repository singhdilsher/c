// Name: spherical-volume.c
// Purpose: To calculate the volume of a sphere
// Author: Dilsher Singh
// Date: 2025/01/12

#include <stdio.h>
#define FRACTION (4.0f/3.0f)
#define PI 3.14159f

int main(void)
{
  // Preset radius
  int r = 10;
  float volume = FRACTION * PI * r * r * r;
  printf("Volume of sphere with radius %d is: %.2f\n", r, volume);
  
  // User-specified radius
  printf("Enter an integer radius: ");
  scanf("%d", &r);
  volume = FRACTION * PI * r * r * r;
  printf("Volume of sphere with radius %d is: %.2f\n", r, volume);
  return 0;
}