#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * A program that prints "Anton" If Anton won more games than Danik, prints
 * "Danik" If Danik won more games than Anton and prints "Friendship" it's a
 * tie.
 */

int main(void) {
  int n, i, len;
  int Ds = 0, As = 0;

  scanf("%d", &n);

  char s[n];

  scanf("%s", s);

  len = strlen(s);

  for (i = 0; i < len; i++) {
    if (s[i] == 'D')
      Ds++;
    else
      As++;
  }

  if (Ds > As) {
    printf("%s\n", "Danik");
  } else if (As > Ds) {
    printf("%s\n", "Anton");
  } else {
    printf("%s\n", "Friendship");
  }

  return EXIT_SUCCESS;
}
