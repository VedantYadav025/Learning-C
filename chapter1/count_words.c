#include <stdio.h>

#define IN_WORD 1
#define OUT_WORD 0

int main() {
  int c, state, num_words;
  state = OUT_WORD;
  num_words = 0;
  while ((c = getchar()) != EOF) {
    if (c != '\t' && c != ' ' && c!= '\n') {
      if (state == OUT_WORD) {
        num_words++;
        state = IN_WORD;
      }
    } else {
      state = OUT_WORD;
    }
  }
  printf("\n Number of words is %d\n", num_words);
  return 0;
}