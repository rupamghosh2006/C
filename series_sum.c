#include<stdio.h>

int main(){
    int n, i;
    float sum= 0.0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    if (n <= 0) {
        printf("Please enter a positive integer.");
        return 1;
    }   
    for(i = 1; i <= n; i++){
        sum += 1.0/i;
    }
    printf("Sum of the series is %.4f",sum);
    return 0;
}