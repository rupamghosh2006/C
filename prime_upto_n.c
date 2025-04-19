#include<stdio.h>
#include<stdbool.h>

int main(){
    int n, i, multiple;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    bool is_prime[n+1];
    for(i = 0; i <=n; i++){
        is_prime[i] = true;
    }
    is_prime[0] = is_prime[1] = false;
    for (i = 2; i*i <= n; i++){
        if(is_prime[i]){
            for (multiple = i*i; multiple <= n; multiple += i){
                is_prime[multiple] = false;
            }
        }
    }
    for(i = 2; i <= n; i++){
        if(is_prime[i]) printf("%d, ",i);  
    }
    return 0;
}