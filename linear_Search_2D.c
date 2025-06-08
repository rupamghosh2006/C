#include<stdio.h>

int main(){ 
    int maxi, i, j;
    int mat[5][5];
    printf("Enter the elements of 5x5 matrix row-wise:\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    maxi = mat[0][0];
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(maxi < mat[i][j]) maxi = mat[i][j];
        }
    }
    printf("Largest number of this matrix is %d\n",maxi);
    return 0;
}
