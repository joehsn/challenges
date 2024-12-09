#include <stdio.h>
#include <stdlib.h>

/**
 * A program that prints the volume fraction in percent of orange juice in
 * Vasya's cocktail.
 */
int main(void) {
  int n, p, i;
  float sum = 0.0;

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    scanf("%d", &p);
    sum += p;
  }

  printf("%f\n", (sum / n));
  return EXIT_SUCCESS;
}
