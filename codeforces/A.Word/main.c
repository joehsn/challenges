#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * A program that changes the letters' register in every word so that it either
 * only consisted of lowercase letters or, vice versa, only of uppercase ones.
 */

int main(void) {
  char *s = malloc(100 * sizeof(char));

  if (s == NULL) {
    fprintf(stderr, "%s\n", "Memory allocation failed!");
    return EXIT_FAILURE;
  }

  scanf("%s", s);

  int len = strlen(s);

  char uc[len], lc[len];
  int ulen = 0, llen = 0;

  for (int i = 0; i < len; i++) {
    if (isupper(s[i]))
      ulen++;
    else
      llen++;
    uc[i] = toupper(s[i]);
    lc[i] = tolower(s[i]);
  }
  uc[len] = '\0';
  lc[len] = '\0';
  printf("%s\n", llen >= ulen ? lc : uc);
  return EXIT_SUCCESS;
}
