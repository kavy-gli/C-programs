#include <stdio.h>

int main() {
    int arr[100][100], i, j, row, coloum;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &coloum);

   
    for(i = 0; i < row; i++) {
        for(j = 0; j < coloum; j++) {
            scanf("%d", &arr[i][j]);
        }
    }


    for(i = 0; i < row; i++) {
        int sum = 0;
        for(j = 0; j < coloum; j++) {
            sum += arr[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

 
    for(j = 0; j < coloum; j++) {
        int sum = 0;
        for(i = 0; i < row; i++) {
            sum += arr[i][j];
        }
        printf("Sum of column %d = %d\n", j + 1, sum);
    }

    return 0;
}
