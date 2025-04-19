#include<stdio.h>

int main(){
    int m, n, m1, n1, hcf;
    printf("Enter the first number: ");
    scanf("%d",&m);
    printf("Enter the second number: ");
    scanf("%d",&n);
    n1 = n, m1 = m;
    if(m == 0 && n == 0){
        printf("HCF is undefined for (0, 0)");
        return 0;
    }
    while (m != 0 && n != 0) {
        if (m > n)
            m %= n;
        else
            n %= m;
    }
    if(m == 0){
        hcf = n;
    }else{
        hcf = m;
    }    
        printf("The HCF of %d and %d is %d", m1, n1, hcf);
        return 0;
}