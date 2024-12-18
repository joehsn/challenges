#include <stdio.h>
#include <stdlib.h>

/**
 * A program that prints the number of damaged dragons.
 */
int main(void) {
  int k, l, m, n, d, i;
  int count = 0;

  scanf("%d %d %d %d %d", &k, &l, &m, &n, &d);

  for (i = 1; i <= d; i++) {
    if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
      count++;
    }
  }

  printf("%d\n", count);
  return EXIT_SUCCESS;
}
