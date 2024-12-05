#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * A function to check if all digits in the year are distinct.
 *
 * @param year
 * @return boolean
 */
bool is_distinct_year(int year) {
  int digits[10] = {0};

  while (year > 0) {
    int leftmost = year % 10;
    if (digits[leftmost]) {
      return false;
    }
    digits[leftmost] = 1;
    year = floor((double)year / 10);
  }

  return true;
}

/**
 * A program that prints the minimum year number that is strictly larger than y
 * and all it's digits are distinct. It is guaranteed that the answer exists.
 */
int main(void) {
  int y;

  scanf("%d", &y);

  do {
    y++;
  } while (!is_distinct_year(y));

  printf("%d\n", y);
  return EXIT_SUCCESS;
}
