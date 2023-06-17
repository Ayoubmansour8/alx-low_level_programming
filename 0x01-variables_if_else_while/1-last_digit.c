#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); // Seed the random number generator with current time

    int n = rand() % RAND_MAX; // Generate a random number

    printf("Last digit of %d is ", n);

    int lastDigit = n % 10; // Extract the last digit of n

    if (lastDigit > 5) {
        printf("%d and is greater than 5", lastDigit);
    } else if (lastDigit == 0) {
        printf("%d and is 0", lastDigit);
    } else {
        printf("%d and is less than 6 and not 0", lastDigit);
    }

    printf("\n");

    return 0;
}

