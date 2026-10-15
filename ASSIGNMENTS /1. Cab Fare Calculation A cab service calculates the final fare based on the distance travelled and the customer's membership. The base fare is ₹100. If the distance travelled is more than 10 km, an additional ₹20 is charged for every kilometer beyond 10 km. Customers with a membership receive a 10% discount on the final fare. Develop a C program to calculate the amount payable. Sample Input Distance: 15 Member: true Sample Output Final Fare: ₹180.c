#include <stdio.h>
#include <stdbool.h>

int main() {
    float distance, fare = 100;
    bool member;

    printf("Distance: ");
    scanf("%f", &distance);

    printf("Member (1 for true, 0 for false): ");
    scanf("%d", (int *)&member);

    if (distance > 10) {
        fare += (distance - 10) * 20;
    }

    if (member) {
        fare = fare * 0.90;
    }

    printf("Final Fare: ₹%.0f\n", fare);

    return 0;
}

*/
 input:
 15
 1
 output:
 rs.180


sample calculation:
- Base fare = ₹100
- Distance = 15 km
- Extra charge = \((15 - 10) \times 20 = ₹100\)
- Fare before discount = ₹200
- Membership discount = \(200 \times 10\% = ₹20\)
Final Fare = ₹180
