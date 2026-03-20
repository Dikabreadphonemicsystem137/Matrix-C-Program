// Display primary and secondary diagonal elements

#include <stdio.h>
int main() 
{
    int matrix[3][3];
    printf("Enter the elements of the matrix: ");

    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            printf("Enter element in position [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Primary Diagonal elements are:\n");
    for (int i=0; i<3; i++) {
        printf("%d ", matrix[i][i]);
    }

    printf("\nSecondary Diagonal elements are:\n ");
    for (int i=0; i<3; i++) {
        printf("%d ", matrix[i][2 - i]);
    }
    printf("\n");
    return 0;
}
