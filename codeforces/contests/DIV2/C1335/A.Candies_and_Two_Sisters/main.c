#include <stdio.h>
#include <stdlib.h>

/**
 * number of ways to distribute exactly n
 * candies between two sisters in a way described in the problem statement. If
 * there is no way to satisfy all the conditions, print 0.
 */

int main(void) {
  int t, i, b, temp;
  scanf("%d", &t);

  for (i = 0; i < t; i++) {
    scanf("%d", &b);

    if (b % 2 == 0) {
      temp = (b - (b / 2)) - 1;
      printf("%d\n", temp >= 0 ? temp : 0);
    } else {
      temp = b - ((b + 1) / 2);
      printf("%d\n", temp >= 0 ? temp : 0);
    }
  }
  return EXIT_SUCCESS;
}

/**
 * This code after improvement
 * #include <stdio.h>
 *
 * int main(void) {
 *     int t; // Number of test cases
 *    scanf("%d", &t);
 *
 *    while (t--) {
 *        int n;
 *        scanf("%d", &n);
 *
 *        // Calculate the number of ways to distribute candies
 *        printf("%d\n", (n - 1) / 2);
 *    }
 *
 *    return 0;
 * }
 */
