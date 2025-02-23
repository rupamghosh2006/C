#include <stdio.h>

int main() {
    int marks, gradeGroup;

    // Taking input from the user
    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);

    // Handling invalid inputs
    if (marks < 0 || marks > 100) {
        printf("Invalid marks! Please enter a value between 0 and 100.\n");
        return 0;
    }

    // Grouping marks into tens for switch-case
    gradeGroup = marks / 10;

    // Using switch-case for grading
    switch (gradeGroup) {
        case 10:  // 100 falls here
        case 9:   printf("Grade: O\n"); break;
        case 8:   printf("Grade: E\n"); break;
        case 7:   printf("Grade: A\n"); break;
        case 6:   printf("Grade: B\n"); break;
        case 5:   printf("Grade: C\n"); break;
        case 4:   printf("Grade: D\n"); break;
        default:  printf("Grade: F\n"); break; // Covers 0 to 39
    }

    return 0;
}
