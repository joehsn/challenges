#include <stdio.h>
#include <stdlib.h>

/**
 * A program that prints the number of rooms where George and Alex can move in.
 */
int main(void) {
  int n;
  int rooms = 0;

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    int p, q;

    scanf("%d %d", &p, &q);

    if ((q - p) >= 2)
      rooms++;
  }

  printf("%d\n", rooms);
  return EXIT_SUCCESS;
}
