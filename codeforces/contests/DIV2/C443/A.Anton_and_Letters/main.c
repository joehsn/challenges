#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * Count the number of unique lowercase letters in a string.
 * Returns 0 if the string is empty.
 */
int main(void) {
  char s[1001];
  bool letters[26] = {0};
  int unique = 0;

  fgets(s, sizeof(s), stdin);

  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] >= 'a' && s[i] <= 'z') {
      int index = s[i] - 'a';
      if (!letters[index]) {
        letters[index] = true;
        unique++;
      }
    }
  }

  printf("%d\n", unique);
  return EXIT_SUCCESS;
}
