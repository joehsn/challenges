#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * A program that prints the minimum number of steps that elephant needs to make
 * to get from point 0 to point x.
 */
int main(void) {
  int x;
  int res;
  int capacity = 5;

  scanf("%d", &x);

  res = ceil((double)x / capacity);
  printf("%d\n", res);
  return EXIT_SUCCESS;
}
