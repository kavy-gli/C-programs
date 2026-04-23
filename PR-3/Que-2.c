#include <stdio.h>

int main()
{
    int no,count=0;
    printf("enter your no :");
    scanf("%d",&no);
    
    for(;no!=0;no=no/10)
    {
        printf("%d  ",no%10);
        count++;
     }
     printf("\n%d",count);
    return 0;
}
