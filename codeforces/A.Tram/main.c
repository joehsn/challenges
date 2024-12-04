#include <stdio.h>
#include <stdlib.h>

/**
 * A program that prints the minimum possible capacity of the tram (0 is
 * allowed).
 */

int main(void) {
  int n, a, b, i;
  int min = 0, res = 0;

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    scanf("%d %d", &a, &b);
    min -= a;
    min += b;
    if (min > res) {
      res = min;
    }
  }

  printf("%d\n", res);
  return EXIT_SUCCESS;
}
