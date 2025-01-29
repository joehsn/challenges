#include <stdio.h>
#include <stdlib.h>

/**
 * A program that prints a snake pattern of '#' and '.' characters.
 */

int main(void) {
  int n, m, i, j;

  scanf("%d %d", &n, &m);

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      if (i % 2 == 0) {
        printf("#");
      } else {
        if ((i % 4 == 1 && j == m - 1) || (i % 4 == 3 && j == 0)) {
          printf("#");
        } else {
          printf(".");
        }
      }
    }
    printf("\n");
  }

  return EXIT_SUCCESS;
}
