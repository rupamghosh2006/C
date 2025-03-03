#include<stdio.h>

int main(){
    int i, n;
    unsigned long long int fact = 1;
    printf("Enter the number which factorial you want to calculate: ");
    scanf("%d",&n);
    if(n<0){
        printf("Factorial is only defined for non-negative integers.");
        return 1;
    } 

    if(n==0){
        printf("%d! = 1",n);
        return 0;
    } 

    if(n>0){
        for(i = n; i>=1; i--){
            fact *= i;
        }
    }
    printf("%d! = %llu", n, fact);
    return 0;
}