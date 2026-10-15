
#include <stdio.h>

int main() {
    int principal, rate, years;
    float interest, amount, discount, settlement;

    scanf("%d", &principal);
    scanf("%d", &rate);
    scanf("%d", &years);

    interest = (principal * rate * years) / 100.0;
    amount = principal + interest;
    discount = interest * 2 / 100.0;
    settlement = amount - discount;

    printf("%.2f\n", interest);
    printf("%.2f\n", amount);
    printf("%.2f\n", discount);
    printf("%.2f\n", settlement);

    return 0;
}
*/ 
input:
100
1
10
output:
  10.00
110.00
0.20
109.80
