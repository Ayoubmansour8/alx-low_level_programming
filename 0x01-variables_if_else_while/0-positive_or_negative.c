#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n; // Declare the variable at the beginning of the function

    srand(time(0)); /* Seed the random number generator with current time */

    n = rand() % RAND_MAX; // Generate a random number

    printf("The number %d is ", n);

    if (n > 0) {
        printf("positive");
    } else if (n == 0) {
        printf("zero");
    } else {
        printf("negative");
    }

    printf("\n");

    return 0;
}
