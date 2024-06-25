#include <stdio.h>

/*
  copies input character and prints it, untill the 'End of File' character is
  read
*/

int main() {
  int c;
  c = getchar();
  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
  return 0;
}