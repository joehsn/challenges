#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * A program prints string a, which describes the arrangement after t seconds.
 * If the i-th position has a boy after the needed time, then the i-th character
 * a must equal "B", otherwise it must equal "G".
 */
int main(void) {
  int n, t, i;

  scanf("%d %d", &n, &t);

  char *s = malloc(n * sizeof(char));

  if (s == NULL) {
    fprintf(stderr, "%s\n", "Memory allocation failed");
    return (EXIT_FAILURE);
  }

  scanf("%s", s);

  int len = strlen(s);

  while (t != 0) {
    for (i = 0; i < len - 1; i += 1) {
      if (s[i] == 'B' && s[i] != s[i + 1]) {
        char temp = s[i];
        s[i] = s[i + 1];
        s[i + 1] = temp;
        i++;
      }
    }
    t--;
  }

  puts(s);
  free(s);
  return (EXIT_SUCCESS);
}
