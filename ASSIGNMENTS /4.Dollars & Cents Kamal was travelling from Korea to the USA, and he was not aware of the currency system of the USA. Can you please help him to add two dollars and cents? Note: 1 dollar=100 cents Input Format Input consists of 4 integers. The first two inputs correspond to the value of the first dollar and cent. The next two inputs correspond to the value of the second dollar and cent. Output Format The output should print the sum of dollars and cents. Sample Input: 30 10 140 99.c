
#include <stdio.h>

int main() {
    int dollar1, cent1, dollar2, cent2;
    int totalCents, dollars, cents;

    scanf("%d", &dollar1);
    scanf("%d", &cent1);
    scanf("%d", &dollar2);
    scanf("%d", &cent2);

    totalCents = cent1 + cent2;
    dollars = dollar1 + dollar2 + totalCents / 100;
    cents = totalCents % 100;

    printf("%d\n%d", dollars, cents);

    return 0;
}

*/
SAMPLE INPUT:
11
6
67
SAMPLE OUTPUT
171
9
