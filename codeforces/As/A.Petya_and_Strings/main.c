#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * A program that prints "-1" If the first string is less than the second one,
 * "1" If the second string is less than the first one, and "0" If the strings
 * are equal.
 */

int main(void)
{
  int i, len_1st, len_2nd, diff;
  int res = 0;
  char * first_s = malloc(100 * sizeof(char));
  char * second_s = malloc(100 * sizeof(char));

  scanf("%s %s", first_s, second_s);

  if (first_s == NULL || second_s == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    return EXIT_FAILURE;
  }

  len_1st = strlen(first_s);
  len_2nd = strlen(second_s);

  if (len_1st != len_2nd) {
    fprintf(stderr, "%s\n", "Strings are not equal!");
    free(first_s);
    free(second_s);
    return EXIT_FAILURE;
  }

  for (i = 0; i < len_1st; i++) {
    char char1 = tolower(first_s[i]);
    char char2 = tolower(second_s[i]);
    if (char1 != char2) {
      diff = char1 - char2;
      res = (diff > 0) ? 1 : -1;
      break;
    }
  }

  printf("%d\n", res);
  free(first_s);
  free(second_s);
  return EXIT_SUCCESS;
}
