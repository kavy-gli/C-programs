#include <stdio.h>

int main()
{
    int no, first, last;

    printf("Enter your number: ");
    scanf("%d", &no);

    last = no % 10;  
    for(; no >= 10; no = no / 10)
    {
    }
    first = no;  
    printf("Sum = %d", first + last);

    return 0;
}
