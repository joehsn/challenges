#include <stdio.h>
#include <stdlib.h>

/**
 * A program that prints Dr.Banner's feeling in one line.
 */
int main(void) {
  int n, i;

  scanf("%d", &n);

  if (n == 1) {
    puts("I hate it");
    return EXIT_SUCCESS;
  }

  for (i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      printf("I love");
    } else {
      printf("I hate");
    }
    if (i < n)
      printf(" that ");
  }
  printf(" it\n");
  return EXIT_SUCCESS;
}
