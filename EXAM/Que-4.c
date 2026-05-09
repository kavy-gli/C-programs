#include <stdio.h>
int swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("After swapping: a=%d, b=%d",a,b);
}
int main()
{
    int a,b;
    int *ptr1=&a;
    int *ptr2=&b;
    printf("Enter two numbers: ");
    scanf("%d %d",ptr1,ptr2);
    printf("Before swapping: a=%d, b=%d\n",a,b);
    swap(a,b);
    return 0;
}
