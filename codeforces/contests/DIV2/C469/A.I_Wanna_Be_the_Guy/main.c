#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * A program that prints "I become the guy." if players can pass all levels
 * together, print "Oh, my keyboard!" otherwise.
 */
int main(void) {
  int n, p, q, i;

  scanf("%d", &n);

  bool levels[n + 1];

  for (i = 1; i <= n; i++)
    levels[i] = false;

  scanf("%d", &p);
  for (i = 0; i < p; i++) {
    int level;
    scanf("%d", &level);
    levels[level] = true;
  }

  scanf("%d", &q);
  for (i = 0; i < q; i++) {
    int level;
    scanf("%d", &level);
    levels[level] = true;
  }

  for (i = 1; i <= n; i++) {
    if (!levels[i]) {
      puts("Oh, my keyboard!");
      return EXIT_SUCCESS;
    }
  }

  puts("I become the guy.");
  return EXIT_SUCCESS;
}
