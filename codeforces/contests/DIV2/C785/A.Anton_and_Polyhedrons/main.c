#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char name[13];
  int score;
} Polyhedron;

/**
 * A program that calculates the total number of faces of polyhedrons.
 */
int main(void) {
  int n, i;
  scanf("%d", &n);
  Polyhedron polyhedrons[5] = {{"Tetrahedron", 4},
                               {"Cube", 6},
                               {"Octahedron", 8},
                               {"Dodecahedron", 12},
                               {"Icosahedron", 20}};

  int total = 0;

  for (i = 0; i < n; i++) {
    char name[13];
    scanf("%s", name);
    for (int j = 0; j < 5; j++) {
      if (strcmp(polyhedrons[j].name, name) == 0) {
        total += polyhedrons[j].score;
        break;
      }
    }
  }

  printf("%d\n", total);
  return EXIT_SUCCESS;
}
