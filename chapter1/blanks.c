#include <stdio.h>

int main() {
  int c;
  int prev_char_space = 0;
  while ((c = getchar()) != EOF) {
    if (c != ' ') {
      putchar(c);
      prev_char_space = 0;
    } else {
      if (!prev_char_space) {
        putchar(c);
        prev_char_space = 1;
      }
    }
  }
  return 0;
}