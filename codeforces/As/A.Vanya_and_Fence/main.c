#include <stdio.h>
#include <stdlib.h>

/**
 * A program that prints the minimum possible valid width of the road.
 */

int main(void) {
  int n, h, i;
  int min = 0;

  scanf("%d %d", &n, &h);

  int friends[n];

  for (i = 0; i < n; i++) {
    scanf("%d", &friends[i]);
    if (friends[i] > h)
      min += 2;
    else
      min++;
  }

  printf("%d\n", min);
  return EXIT_SUCCESS;
}
