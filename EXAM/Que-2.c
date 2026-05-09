#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    printf("Vowels: ");
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
           str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') {
            printf("%c", str[i]);
        }
    }

    printf("\nConsonants: ");
    for(i = 0; str[i] != '\0'; i++) {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' &&
               str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U') {
                printf("%c", str[i]);
            }
        }
    }

    return 0;
}
