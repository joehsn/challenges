#include <stdio.h>
#include <stdlib.h>

/**
 * A program that prints out the number of the least number of terms.
 */

int main(void) {
  int t, n;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);

    int parts[5], count = 0, indicator = 1;

    while (n > 0) {
      int digit = n % 10;
      if (digit) {
        parts[count++] = digit * indicator;
      }
      n /= 10;
      indicator *= 10;
    }
    printf("%d\n", count);
    for (int i = 0; i < count; i++)
      printf("%d ", parts[i]);
    putchar('\n');
  }
  return EXIT_SUCCESS;
}
