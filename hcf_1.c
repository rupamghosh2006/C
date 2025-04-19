#include<stdio.h>

int main(){
    int m, n, min, i, hcf=1;
    printf("Enter the first number: ");
    scanf("%d",&m);
    printf("Enter the second number: ");
    scanf("%d",&n);
    if(m == 0 && n == 0){
        printf("HCF is undefined for (0, 0)");
        return 0;
    }
    if(m == 0 || n == 0){
        if(m == 0){
            hcf = n;
        }else{
            hcf = m;
        }
        printf("The HCF of %d and %d is %d", m, n, hcf);
        return 0;
    }

    if(m>n){
        min = n;
    }else{
        min = m;
    }
    for(i = 1; i <= min; i++){
        if(m%i == 0 && n%i == 0) hcf = i;
    }
    printf("The HCF of %d and %d is %d", m, n, hcf);
    return 0;
}