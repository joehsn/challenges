#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * A program that prints "YES" if n is a nearly lucky number. Otherwise, print
 * "NO" (without the quotes). A "nearly lucky" number cosists of either 4 or 7,
 * and their length is either 4 or 7.
 */

int main(void) {
  long long int n, leftmost;
  int count = 0;
  scanf("%lld", &n);

  while (n != 0) {
    leftmost = n % 10;
    if (leftmost == 4 || leftmost == 7) {
      count++;
    }
    n = floor((double)n / 10);
  }

  printf("%s\n", (count == 4 || count == 7) ? "YES" : "NO");
  return EXIT_SUCCESS;
}
