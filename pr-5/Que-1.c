#include <stdio.h>

int main() {
    
    int arr[100], i, n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

   
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("\nThis is your array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

   
    printf("\n\nnegative numbers:\n");
    for(i = 0; i < n; i++) {
        if(arr[i] > 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
