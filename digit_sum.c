#include<stdio.h>

int main(){
    int n, sum = 0,dig;
    printf("Enter a five digit number: ");
    scanf("%d",&n);
    if (n < 10000 || n > 99999) {
        printf("Invalid input! Please enter a five-digit number.\n");
        return 1;  // Exit with error
    }
    while(n != 0){
        dig = n % 10;
        sum += dig;
        n /= 10;
    }
    printf("Sum is %d",sum);
    return 0;
}