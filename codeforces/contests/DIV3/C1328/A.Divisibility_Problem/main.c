#include <stdio.h>
#include <stdlib.h>

/**
 * A program that prints the minimum number of moves you need to do in order to
 * make a divisible by b.
 */
int main(void) {
  int t, a, b, i;

  scanf("%d", &t);

  for (i = 0; i < t; i++) {
    scanf("%d %d", &a, &b);

    if (a % b == 0)
      printf("%d\n", a % b);
    else
      printf("%d\n", (b - (a % b)));
  }

  return EXIT_SUCCESS;
}
