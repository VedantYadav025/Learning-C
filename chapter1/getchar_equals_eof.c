#include <stdio.h>

int main() {
  int c;
  for (int i = 0; i < 10; i++) {
    c = (getchar() != EOF);
    printf("%d\n", c);
    getchar();
  }
  printf("As we can see, the value of c is either 0 or 1 (as claimed in the "
         "book)\n");
  return 0;
}