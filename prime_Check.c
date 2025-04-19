#include<stdio.h>

int main(){
    int i,n;
    _Bool flag = 1;
    printf("Enter the number to check: ");
    scanf("%d",&n);
    if(n<1){
        printf("Enter a number greater than 0.");
        return 1;
    }
    if(n==1){
        printf("1 is not a prime number.");
        return 0;
    }
    
    for(i = 2; i*i <= n;i++){
        if(n%i == 0){
            flag = 0;
            break;
        } 
    }
    if(flag){
        printf("%d is a prime number.",n);
    }else{
        printf("%d is not a prime number.",n);
    }
    return 0;
}