#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * A program that prints the number of groups of magnets.
 */
int main(void) {
  int n, i;
  int groups = 0;
  char prev[3];

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    char curr[3];
    scanf("%s", curr);
    if (strcmp(curr, prev) != 0) {
      groups++;
      strcpy(prev, curr);
    }
  }
  printf("%d\n", groups);
  return EXIT_SUCCESS;
}
