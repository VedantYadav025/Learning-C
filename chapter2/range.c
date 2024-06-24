#include <limits.h>
#include <stdio.h>
/* How to compute the limits without using the library limits.h */

/*
  Program to calculate ranges of the following data types:
  --> char
  --> short int
  --> int
  --> long int
*/

int main() {
  printf("Range of int: %d to %d\n", INT_MIN, INT_MAX);
  printf("Range of char: %d to %d\n", CHAR_MIN, CHAR_MAX);
  printf("Range of short int: %d to %d\n", SHRT_MIN, SHRT_MAX);
  printf("Range of long int: %ld to %ld\n", LONG_MIN, LONG_MAX);
}
