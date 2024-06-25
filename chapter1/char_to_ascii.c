#include <stdio.h>

int main() {
  char c;
  c = getchar();
  printf("The ascii value of ");
  putchar(c);
  printf(" is %d\n", c);
  return 0;
}