#include<stdio.h>

int main(){
    int days, months, rem_days;
    printf("Enter the number of day(s): ");
    scanf("%d", &days);
    months = days / 30;
    rem_days = days % 30;
    printf("%d day(s) are equivalent to %d month(s) and %d day(s).", days, months, rem_days);
}