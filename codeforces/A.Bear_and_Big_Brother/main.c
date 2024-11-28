#include <stdio.h>
#include <stdlib.h>

/**
 * A program that prints one integer, denoting the integer number of years after
 * which Limak will become strictly larger than Bob.
 */
int main(void) {
  int limak, bob, count;

  scanf("%d %d", &limak, &bob);

  if (limak > bob) {
    fprintf(stderr, "%s\n", "Limak weight cannot be more than Bob!");
    return EXIT_FAILURE;
  }

  for (count = 0; limak <= bob; count++) {
    limak *= 3;
    bob *= 2;
  }

  printf("%d\n", count);
  return EXIT_SUCCESS;
}
