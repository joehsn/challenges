#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i, n, petya, vasya, tonya, res = 0;

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    scanf("%d %d %d", &petya, &vasya, &tonya);
    if (petya + vasya + tonya >= 2) {
      res++;
    }
  }
  printf("%d\n", res);
  return EXIT_SUCCESS;
}
