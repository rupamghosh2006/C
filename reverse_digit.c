#include<stdio.h>

int main(){
    int n, ans = 0, copyN, dig;
    printf("Enter a five digit number: ");
    scanf("%d",&n);
    copyN = n;
    if (n < 10000 || n > 99999) {
        printf("Invalid input! Please enter a five-digit number.\n");
        return 1;  // Exit with error
    }
    while(n != 0){
        dig = n % 10;
        ans = (ans * 10) + dig;
        n /= 10;
    }
    printf("Reverse of %05d is %05d\n", copyN, ans);
    return 0;
}