#include <stdio.h>

/* prints Fahrenit-Celsius table for fahr = 0, 20, ...., 300 */

int main() {
  float fahr, celsius;
  int lower, step, upper;
  lower = 0;
  step = 20;
  upper = 300;
  fahr = lower;
  printf("Fahr\t Celsius\n");
  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
  return 0;
}