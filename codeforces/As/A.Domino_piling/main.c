#include <stdio.h>
#include <stdlib.h>

/**
 * A program that finds the maximum number of dominoes in M x N rectanglar
 * board.
 */

int main(void) {
  int m, n, product, reminder, result;

  scanf("%d %d", &m, &n);

  product = m * n;

  reminder = product % 2;

  result = (product - reminder) / 2;

  printf("%d\n", result);

  return EXIT_SUCCESS;
}
