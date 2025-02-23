#include <stdio.h>

int main() {
    int marks;

    // Taking input from the user
    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);

    // Checking the grade using if-else
    if (marks >= 90 && marks <= 100) {
        printf("Grade: O\n");
    } 
    else if (marks >= 80 && marks <= 89) {
        printf("Grade: E\n");
    } 
    else if (marks >= 70 && marks <= 79) {
        printf("Grade: A\n");
    } 
    else if (marks >= 60 && marks <= 69) {
        printf("Grade: B\n");
    } 
    else if (marks >= 50 && marks <= 59) {
        printf("Grade: C\n");
    } 
    else if (marks >= 40 && marks <= 49) {
        printf("Grade: D\n");
    } 
    else if (marks >= 0 && marks <= 39) {
        printf("Grade: F\n");
    } 
    else {
        printf("Invalid marks! Please enter a value between 0 and 100.\n");
    }

    return 0;
}
