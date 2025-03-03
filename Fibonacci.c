#include<stdio.h>

int main(){
    int n, i, t1 = 0, t2 = 1, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    if (n <= 0) {
        printf("Please enter a positive integer.");
        return 1;
    }  
    if(n == 1){
        printf("0");
    }else if(n == 2){
        printf("0, 1");
    }else if(n > 2){
        printf("0, 1");
        for(i = 3; i<=n; i++){
            sum = t1 + t2;
            printf(", %d",sum);
            t1 = t2;
            t2 = sum;
        }
    }
    return 0;
}