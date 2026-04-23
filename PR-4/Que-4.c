#include <stdio.h>

int main() {
    int n = 5;

    for (int i = n; i >= 1; i--) {

        // print spaces for right alignment
        for (int s = 1; s <= n - i; s++) {
            printf("  ");
        }

        int val = 1;

        // print 1-0 pattern
        for (int j = 1; j <= i; j++) {
            printf("%d ", val);
            val = 1 - val;  // toggle
        }

        printf("\n");
    }

    return 0;
}
