#include <stdio.h>
#include <stdlib.h>

/**
 * A program that prints out the minimum total distance the friends need to
 * travel in order to meet together.
 */
int main(void) {
  int x1, x2, x3, max, min;
  scanf("%d %d %d", &x1, &x2, &x3);

  max = x1;
  if (x2 > max)
    max = x2;
  if (x3 > max)
    max = x3;

  min = x1;
  if (x2 < min)
    min = x2;
  if (x3 < min)
    min = x3;

  printf("%d\n", max - min);
  return EXIT_SUCCESS;
}
