#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct ptrs {
  int max;
  int max_at;
  int min;
  int min_at;
} ptrs;

/**
 * A program that prints the minimum number of seconds the colonel will need to
 * form a line-up the general will like.
 */
int main(void) {
  int n, result;

  ptrs res = {INT_MIN, -1, INT_MAX, -1};

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    int soldier;
    scanf("%d", &soldier);

    if (soldier > res.max) {
      res.max = soldier;
      res.max_at = i + 1;
    }

    if (soldier <= res.min) {
      res.min = soldier;
      res.min_at = i + 1;
    }
  }
  result = (res.max_at - 1) + (n - res.min_at);
  if (res.max_at > res.min_at) {
    result--;
  }

  printf("%d", result);
  return EXIT_SUCCESS;
}
