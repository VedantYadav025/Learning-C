#include <stdio.h>

int main() {
  int c;
  long num_lines, num_tabs, num_blanks;
  num_lines = 0;
  num_tabs = 0;
  num_blanks = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n')
      ++num_lines;
    else if (c == '\t') 
      ++num_tabs;
    else if (c == ' ') 
      ++num_blanks;
  }
  printf("The number of lines is %ld\n", num_lines);
  printf("The number of tabs is %ld\n", num_tabs);
  printf("The number of blanks is %ld\n", num_blanks);
  return 0;
}