#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * A program that sorts the summands in non-decreasing order.
 */

int main(void)
{
  int i, j, len;
  char temp;
  char *s = malloc(100 * sizeof(char));

  if (s == NULL)
  {
    fprintf(stderr, "Memory allocation failed\n");
    return EXIT_FAILURE;
  }

  scanf("%s", s);

  len = strlen(s);

  for (i = 0; i < len - 2; i += 2)
  {
    for (j = i; j < len; j += 2)
    {
      if (s[j] < s[i])
      {
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
      }
    }
  }
  printf("%s\n", s);
  free(s);
  return EXIT_SUCCESS;
}
