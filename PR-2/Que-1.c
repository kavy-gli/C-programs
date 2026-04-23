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
        switch(grade)
        {
            case 'A' :
            printf("excellent keep it up !!!!.  ");
            break;
            
            case 'B' :
            printf("very good keep growing up.  ");
            break;
            
            case 'C' :
            printf("good work harder to shine bette . ");
            break;
            
            case 'D' :
            printf("it shows you tried well keep practicing.  ");
            break;
            
            case 'E' :
            printf("keep practicing.  ");
            break;
            
            case 'F' :
            printf("you need improvment.  ");
            break;
        }
        if(grade=='A'||grade=='B'||grade=='C'||grade=='D'){
            printf("You are eligible to move to next class.   ");
        }
        else{
            printf("You are not eligible to move to next class.  ");
        }
    printf("your Grade is: %c\n", grade);

    return 0;
}
