#include <stdio.h>
#include <stdlib.h>

/**
 * A program for A. Next Round challenge on codeforces.
 * A program that calculates the number of participants who advance to the next
 * round.
 */

int main(void) {
  int n, k, i, threshold;
  int advancers = 0;
  int *participants;

  scanf("%d %d", &n, &k);

  if (n < k) {
    fprintf(
        stderr, "%s\n",
        "The number of participants cannot be less than the number of rounds");
    exit(EXIT_FAILURE);
  }

  participants = (int *)malloc(n * sizeof(int));

  for (i = 0; i < n; i++) {
    scanf("%d", &participants[i]);
  }

  threshold = participants[k - 1];

  for (i = 0; i < n; i++) {
    if (participants[i] >= threshold && participants[i] > 0) {
      advancers++;
    }
  }

  printf("%d\n", advancers);
  free(participants);
  return EXIT_SUCCESS;
}
