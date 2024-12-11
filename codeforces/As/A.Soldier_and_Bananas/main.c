#include <stdio.h>
#include <stdlib.h>

/**
 * A program that prints the amount of dollars that the soldier must borrow from
 * his friend. If he doesn't have to borrow money, output 0.
 */

int main(void) {
  int k, n, w, i;
  int res = 0;

  scanf("%d %d %d", &k, &n, &w);

  for (i = 1; i <= w; i++) {
    res += (k * i);
  }

  if (n > res)
    printf("%d\n", 0);
  else
    printf("%d\n", res - n);

  return EXIT_SUCCESS;
}
