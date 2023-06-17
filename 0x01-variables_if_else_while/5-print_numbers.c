#include <stdio.h>

int main() {
    int number;

    for (number = 0; number <= 9; number++) {
        putchar('0' + number);
    }

    putchar('\n');

    return 0;
}

