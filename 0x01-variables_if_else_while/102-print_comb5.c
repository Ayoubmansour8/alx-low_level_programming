#include <stdio.h>

int main() {
    for (int num1 = 0; num1 <= 98; num1++) {
        for (int num2 = num1 + 1; num2 <= 99; num2++) {
            putchar((num1 / 10) + '0');
            putchar((num1 % 10) + '0');
            putchar(' ');
            putchar((num2 / 10) + '0');
            putchar((num2 % 10) + '0');
            if (num1 != 98 || num2 != 99) {
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');

    return 0;
}
00 01, 00 02, 00 03, 00 04, 00 05, 00 06, 00 07, 00 08, 00 09, 00 10, 00 11, ... 98 91, 98 92, 98 93, 98 94, 98 95, 98 96, 98 97, 98 98, 98 99, 99 00, 99 01, 99 02, 99 03, 99 04, 99 05, 99 06, 99 07, 99 08, 99 09, 99 10, ... 99 91, 99 92, 99 93, 99 94, 99 95, 99 96, 99 97, 99 98

