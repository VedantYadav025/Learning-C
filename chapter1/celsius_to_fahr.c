#include <stdio.h>

/*
  print fahrenhit table for celsius = 0, 10, 20, ..., 100
*/

int main() {
  int lower, step, upper;
  int celsius;
  float fahr;
  lower = 0;
  step = 10;
  upper = 100;
  celsius = lower;
  printf("Celsius\t\tFahr\n");
  while (celsius <= upper) {
    fahr = (9.0 / 5.0) * celsius + 32.0;
    printf("%6d\t\t%6.2f\n", celsius, fahr);
    celsius += step;
  }
  return 0;
}