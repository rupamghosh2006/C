#include<stdio.h>

int main(){ 
    int temp, i, j;
    int mat[4][4];
    printf("Enter the elements of 4x4 matrix row-wise:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Before transpose: \n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 4; i++){
        for(j = i + 1; j < 4; j++){
            temp = mat[j][i];
            mat[j][i] = mat[i][j];
            mat[i][j] = temp;
        }
    }
    printf("After transpose: \n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
