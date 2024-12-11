#include <stdio.h>
#include <stdlib.h>

/**
 * A program that prints one word: "EASY" if the problem is easy according to
 * all responses, or "HARD" if there is at least one person who thinks the
 * problem is hard.
 */
int main(void) {
  int n;
  char *res = "EASY";

  scanf("%d", &n);

  int p[n];

  for (int i = 0; i < n; i++) {
    scanf("%d", &p[i]);
    if (p[i] == 1)
      res = "HARD";
  }

  puts(res);
  free(res);
  return EXIT_SUCCESS;
}
