#include<stdio.h>

int main(){
    int n1, n2;
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);
    printf("Before swapping, first no.: %d; second no.: %d.\n",n1,n2);
    n1 = n1 - n2;
    n2 = n1 + n2;
    n1 = n2 - n1;
    printf("After swapping, first no.: %d; second no.: %d.",n1,n2);
    return 0;
}