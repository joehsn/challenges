#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * A program that prints the minimum number of bills that Allen could receive.
 */
int main(void)
{
    long long n;
    long long count = 0;
    int banknote[5] = {100, 20, 10, 5, 1};

    scanf("%lld", &n);

    for (int i = 0; n > 0; i++)
    {
        if ((n / banknote[i]) < 0)
            continue;

        count += floor(n / banknote[i]);
        n = n % banknote[i];
    }

    printf("%lld", count);
    return EXIT_SUCCESS;
}