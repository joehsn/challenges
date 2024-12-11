#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Prints the final value of `x` after certain number of Bit++ (Programming
 * language) get executed.
 */
int main(void) {
  int n, i, x = 0;
  char *statment = (char *)malloc(3 * sizeof(char));

  scanf("%d", &n);

  if (n < 0)
    return EXIT_FAILURE;

  for (i = 0; i < n; i++) {
    scanf("%s", statment);

    if (strcmp(statment, "++X") == 0 || strcmp(statment, "X++") == 0) {
      x++;
    } else if (strcmp(statment, "--X") == 0 || strcmp(statment, "X--") == 0) {
      x--;
    } else {
      fprintf(stderr, "%s\n", "Wrong statment");
      return EXIT_FAILURE;
    }
  }

  printf("%d\n", x);
  free(statment);
  return EXIT_SUCCESS;
}
