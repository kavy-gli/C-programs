#include <stdio.h>

int main() {
    float percentage;

    printf("Enter your percentage (1-100): ");
    scanf("%f", &percentage);
    char grade = (percentage >= 90) ? 'A' :
                 (percentage >= 80) ? 'B' :
                 (percentage >= 70) ? 'C' :
                 (percentage >= 60) ? 'D' :
                 (percentage >= 50) ? 'E' : 'F';

    printf("your Grade is: %c\n", grade);

    return 0;
}
