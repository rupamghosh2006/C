#include<stdio.h>

int main(){
    int i, j;
    int mat[5][5] = {0};
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(i == j) mat[i][j] = 1;        
        }
    }
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}