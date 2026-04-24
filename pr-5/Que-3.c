#include <stdio.h>

int main() {
    
    int arr[100][100],i,j,rows,coloms;

    printf("Enter the rows :");
    scanf("%d", &rows);
    printf("enter the coloms :");
    scanf("%d",&coloms);

    for(i = 0; i < rows; i++) {
        for(j=0;j < coloms; j++ )
        {
        scanf("%d",&arr[i][j]);    
        }
    }
 
for(i = 0; i < rows; i++) {
        for(j=0;j < coloms; j++ )
        {
       printf("%d ",arr[i][j]);   
        }
        printf("\n");
    }
    
    return 0;
}
