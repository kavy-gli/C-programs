#include <stdio.h>
int function(int leap)
{
    if(leap % 4 == 0 )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    if(function(year))
    {
        printf("%d is a leap year.",year);
    }
    else
    {
        printf("%d is not a leap year.",year);
    }
    return 0;
}
