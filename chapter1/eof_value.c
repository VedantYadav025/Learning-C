#include <stdio.h>

int main() {
  int c;
  while ((c = getchar()) != EOF) {
    c = getchar();
  }
  printf("%d\n", c);
  return 0;
}