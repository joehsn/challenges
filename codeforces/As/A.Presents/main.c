#include <stdio.h>
#include <stdlib.h>

/**
 * A program that prints the i-th number should equal the
 * number of the friend who gave a gift to friend number i.
 */
int main(void)
{
  int n, i, tmp;

  scanf("%d", &n);

  int p[n];
  
  for (i = 1; i <= n; i++) {
    scanf("%d", &tmp);
    p[tmp - 1] = i;
  }

  for (i = 0; i < n; i++) {
    printf("%d", p[i]);
    if (i + 1 != n) 
      putchar(' ');
  }
  putchar('\n');
  return EXIT_SUCCESS;
}
