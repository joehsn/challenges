#include <stdio.h>
#include <stdlib.h>

/**
 * A program that reads an integer from the user, calculates its alternating sum
 * using the `calc` function, and prints the result.
 */
int main(void) {
  long long n;
  scanf("%lld", &n);

  long long result;

  if (n % 2 == 0) {
    result = n / 2;
  } else {
    result = -(n + 1) / 2;
  }

  printf("%lld\n", result);
  return EXIT_SUCCESS;
}
