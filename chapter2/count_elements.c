#include <stdio.h>
int countElements(const int *arr, const int size, const int key) {
  int cnt = 0;
  for (int i = 0; i < size; ++i) {
    if (arr[i] == key)
      cnt++;
  }
  return cnt;
}

int main() {
  int n = 10;
  int arr[10] = {1, 2, 3, 4, 5, 5, 5, 6, 7, 10};
  printf("The number of 5's in the array is %d", countElements(arr, 10, 5));
  return 0;
}