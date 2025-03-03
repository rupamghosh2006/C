#include<stdio.h>

unsigned long long int factorial(int n){
    int i;
    unsigned long long int fact = 1;
    for(i = n; i>=1; i--){
        fact *= i;
    }
    return fact;
}
int main(){
    int i, n;
    double ans, sign = -1.0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    if(n>=1){
        ans = -1.0;
        for(i = 3; i <= ((2*n) - 1); i += 2){
            sign *= -1.0;
            ans += (1.0/factorial(i))*sign;            
        }
    }
    printf("Sum of series: %.6lf\n", ans);
    return 0;
}