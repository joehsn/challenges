#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * A program that print "YES" If the word t is a word s, written reversely,
 * otherwise print NO.
 */

int main(void) {
  int i, len;
  char s[101], t[101];
  char *ans = "YES";

  scanf("%s %s", s, t);

  len = strlen(s);

  if (len != (int)strlen(t)) {
    printf("%s\n", "NO");
    return EXIT_SUCCESS;
  }

  for (i = 0; i < len; i++) {
    if (s[i] != t[len - 1 - i]) {
      ans = "NO";
    }
  }
  printf("%s\n", ans);
  return EXIT_SUCCESS;
}
