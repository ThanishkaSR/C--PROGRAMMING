
#include <stdio.h>

int main() {
    int A, B, C, car;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &car);

    if (car % 3 == A % 3) {
        printf("Car %d goes into road A", car);
    } else if (car % 3 == B % 3) {
        printf("Car %d goes into road B", car);
    } else if (car % 3 == C % 3) {
        printf("Car %d goes into road C", car);
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
