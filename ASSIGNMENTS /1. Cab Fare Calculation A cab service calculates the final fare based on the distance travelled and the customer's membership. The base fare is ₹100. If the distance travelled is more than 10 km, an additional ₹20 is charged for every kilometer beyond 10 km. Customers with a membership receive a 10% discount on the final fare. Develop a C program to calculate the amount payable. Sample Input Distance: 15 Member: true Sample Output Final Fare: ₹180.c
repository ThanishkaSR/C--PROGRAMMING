
#include <stdio.h>

int main() {
    int distance, member;
    int fare = 100;

    scanf("%d %d", &distance, &member);

    if (distance > 10) {
        fare = fare + (distance - 10) * 20;
    }

    if (member == 1) {
        fare = fare - (fare * 10 / 100);
    }

    printf("Final Fare: Rs.%d", fare);

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
