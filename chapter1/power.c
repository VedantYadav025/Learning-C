#include <stdio.h>

int power(int m, int n); // declration

int main() {
  int m, n;
  m = 2;
  n = 5;
  printf("2 raised to the power 5 is %d\n", power(m, n));
  return 0;
}

int power(int m, int n) {
  int p = 1;
  for (int i = 0; i < n; ++i) {
    p = p * m;
  }
  return p;
}