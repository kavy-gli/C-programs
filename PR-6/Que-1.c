#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, len, flag = 1;

    printf("Enter your name: ");
    scanf("%s", name);

    len = strlen(name);

    for(i = 0; i < len / 2; i++) {
        if(name[i] != name[len - i - 1]) {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("%s is a palindrome", name);
    else
        printf("%s is not a palindrome", name);

    return 0;
}
