/* 
a
bb
ccc
dddd
*/
#include<stdio.h>

int main(){
    int i, j, n;
    char ch;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        for(j = 0; j <= i; j++){
            ch = 'a' + i;
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}