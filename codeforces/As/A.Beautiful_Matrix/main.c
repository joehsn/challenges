#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * A program that returns the minimum number of moves needed to make the matrix
 * beautiful. A matrix is beautiful, if the single number one of the matrix is
 * located in its middle (in the cell that is on the intersection of the third
 * row and the third column).
 */

struct Location {
  int i;
  int j;
};

typedef struct Location Location;

int main(void) {
  int i, j, result;
  Location loc;
  int matrix[5][5];

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      scanf("%d", &matrix[i][j]);
      if (matrix[i][j] == 1) {
        // We add one here because it's zero-based indexing arrays.
        loc.i = i + 1;
        loc.j = j + 1;
      }
    }
  }
  result = abs(loc.i - 3) + abs(loc.j - 3);
  printf("%d\n", result);
  return EXIT_SUCCESS;
}
