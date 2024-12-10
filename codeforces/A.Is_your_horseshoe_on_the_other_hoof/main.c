#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * Checks if a given target integer is present in an array of integers.
 *
 * @param arr The array of integers.
 * @param target The integer to search for.
 * @return `true` if the target is found, `false` otherwise.
 */
bool includes(const int *arr, const int target) {
  for (int i = 0; i < 4; i++) {
    if (arr[i] == target)
      return true;
  }
  return false;
}

/**
 * Prints the the minimum number of horseshoes Valera needs to buy.
 */
int main(void) {
  int s, i;
  int len = 0;
  int res[4];

  for (i = 0; i < 4; i++) {
    scanf("%d", &s);
    if (!includes(res, s)) {
      res[i] = s;
      len++;
    }
  }
  printf("%d\n", (4 - len));
  return EXIT_SUCCESS;
}
