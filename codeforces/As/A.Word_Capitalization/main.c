#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * A program that capitalize the given word.
 */

int main(void) {
  char *s = malloc(1000 * sizeof(char));
  if (s == NULL) {
    fprintf(stderr, "%s\n", "Memory Allocation faild!");
    return EXIT_FAILURE;
  }
  scanf("%s", s);

  s[0] = toupper(s[0]);
  printf("%s\n", s);
  free(s);
  return EXIT_SUCCESS;
}
