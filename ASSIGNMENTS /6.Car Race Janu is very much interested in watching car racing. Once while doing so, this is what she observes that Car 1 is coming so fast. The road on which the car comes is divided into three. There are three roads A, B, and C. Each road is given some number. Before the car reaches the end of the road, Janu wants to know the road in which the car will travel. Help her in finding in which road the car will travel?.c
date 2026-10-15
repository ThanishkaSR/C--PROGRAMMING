
#include <stdio.h>

int main() {
    int A, B, C, car;
    int firstDigit;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &car);

    firstDigit = car;

    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    if (A / 100 == firstDigit ||
        (A / 10) % 10 == firstDigit ||
        A % 10 == firstDigit) {
        printf("Car 1 goes into road A");
    } else if (B / 100 == firstDigit ||
               (B / 10) % 10 == firstDigit ||
               B % 10 == firstDigit) {
        printf("Car 1 goes into road B");
    } else if (C / 100 == firstDigit ||
               (C / 10) % 10 == firstDigit ||
               C % 10 == firstDigit) {
        printf("Car 1 goes into road C");
    } else {
        printf("No path exists");
    }

    return 0;
}
*/
SAMPLE INPUT:
243
136
567
17
SAMPLE OUTPUT:
Car 1 goes into road B
