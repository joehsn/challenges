#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * A program that prints the corresponding answer.
 */

int main(void) {
  char f[101], s[101], r[101];

  scanf("%s %s", f, s);

  if (strlen(f) != strlen(s)) {
    fprintf(stderr, "%s\n", "Both numbers do not have the same length");
    return EXIT_FAILURE;
  }
  for (int i = 0; i < (int)strlen(f); i++) {
    if (f[i] == s[i])
      r[i] = '0';
    else
      r[i] = '1';
  }
  r[strlen(f)] = '\0';
  puts(r);
  return EXIT_SUCCESS;
}
