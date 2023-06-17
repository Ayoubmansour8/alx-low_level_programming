#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    int lastDigit;

    srand(time(0)); /* Seed the random number generator with current time */

    n = rand() % RAND_MAX; /* Generate a random number */

    lastDigit = abs(n % 10); /* Extract the last digit of n */

    printf("Last digit of %d is %d and is ", n, lastDigit);

    if (lastDigit > 5) {
        printf("greater than 5");
    } else if (lastDigit == 0) {
        printf("0");
    } else {
        printf("less than 6 and not 0");
    }

    printf("\n");

    return 0;
}

