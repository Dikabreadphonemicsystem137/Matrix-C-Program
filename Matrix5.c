// identity matrix

#include <stdio.h>

int main() 
{
    int n, i, j, isIdentity=1;  
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);
    
    int matrix[n][n];
    
    printf("Enter the elements of the matrix:\n");
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            if(i==j && matrix[i][j] !=1) 
            {
                isIdentity=0;
                break;
            } else if(i != j && matrix[i][j] !=0) 
            {
                isIdentity=0;
                break;
            }
        }
        if(!isIdentity) {
            break;
        }
    }  
    if(isIdentity) {
        printf("The matrix is an Identity Matrix.");
    } else {
        printf("The matrix is not an Identity Matrix.");
    } 
    return 0;
}
