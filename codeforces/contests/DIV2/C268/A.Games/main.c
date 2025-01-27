#include <stdio.h>
#include <stdlib.h>

/**
 * A program that reads an integer n and two arrays a and b of size n, and
 * prints the number of elements that are equal in both arrays.
 */

int main(void) {
  int n, i, j;
  int total = 0;
  scanf("%d", &n);

  int a[n], b[n];

  for (i = 0; i < n; i++) {
    scanf("%d %d", &a[i], &b[i]);
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (a[i] == b[j])
        total++;
    }
  }

  printf("%d\n", total);
  return EXIT_SUCCESS;
}
