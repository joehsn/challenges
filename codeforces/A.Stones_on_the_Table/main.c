#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * A program that caclulates the numbeor of two neighboring stones of same
 * colour.
 */

int main(void) {
  int n, len, count, i;

  scanf("%d", &n);

  char stones[n];

  scanf("%s", stones);

  count = 0;
  len = strlen(stones);
  i = 0;

  for (i = 0; i < len - 1; i++) {
    if (stones[i] == stones[i + 1]) {
      count++;
    }
  }

  printf("%d\n", count);
  return EXIT_SUCCESS;
}
