#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * A program that prints "CHAT WITH HER!" (without the quotes) if
 * the given username is of a female, otherwise, print "IGNORE HIM!"
 * (without the quotes).
 */

int main(void) {
  char *s = malloc(100 * sizeof(char));

  if (s == NULL) {
    fprintf(stderr, "%s\n", "Memory allocation faild!");
    return EXIT_FAILURE;
  }

  scanf("%s", s);

  int len = strlen(s);

  int distinct = 0;

  for (int i = 0; i < len; i++) {
    int distinctive = 1;
    for (int j = 0; j < i; j++) {
      if (s[j] == s[i]) {
        distinctive = 0;
        break;
      }
    }

    if (distinctive) {
      distinct++;
    }
  }

  if (distinct % 2 == 0) {
    printf("%s\n", "CHAT WITH HER!");
  } else {
    printf("%s\n", "IGNORE HIM!");
  }
  free(s);
  return EXIT_SUCCESS;
}
