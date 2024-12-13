#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 */
int main(void) {
  int n;
  scanf("%d", &n);

  char str[101];
  scanf("%s", str);

  int alphabet[26] = {0};
  int i;

  for (i = 0; str[i] != '\0'; i++) {
    char ch = tolower(str[i]);
    if (ch >= 'a' && ch <= 'z') {
      alphabet[ch - 'a'] = 1;
    }
  }

  for (i = 0; i < 26; i++) {
    if (alphabet[i] == 0) {
      printf("NO\n");
      return EXIT_SUCCESS;
    }
  }

  printf("YES\n");
  return EXIT_SUCCESS;
}
