#include <stdio.h>

int main() {
    int questionsAnswered, remainingTime, alreadySubmitted;

    scanf("%d", &questionsAnswered);
    scanf("%d", &remainingTime);
    scanf("%d", &alreadySubmitted);

    if (questionsAnswered >= 1 && remainingTime > 0 && alreadySubmitted == 0) {
        printf("Submission Allowed");
    } else {
        printf("Submission Not Allowed");
    }

    return 0;
}

*/
input:
45
12
0
  
output:
Submission Allowed
