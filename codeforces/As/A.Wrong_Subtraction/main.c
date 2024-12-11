#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * A program that retuns the result of the decreasing `n` by one `k` times.
 */

int main(void) {
  int n, k, i;

  scanf("%d %d", &n, &k);

  for (i = 0; i < k; i++) {
    if (n % 10 == 0)
      n = floor((double)n / 10);
    else
      n -= 1;
  }

  printf("%d", n);
  return EXIT_SUCCESS;
}
