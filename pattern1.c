/* 
  1
 232
34543
*/

#include <stdio.h>

int main() {
    int n, i, j, s, num;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        num = i;

        for(s = 0; s < n - i; s++){
            printf(" ");
        }
        
        // Print ascending part
        for (j = 1; j <= i; j++) {
            printf("%d", num);
            num++;
        }

        // Adjust for descending part
        num -= 2;

        // Print descending part
        for (j = 1; j < i; j++) {
            printf("%d", num);
            num--;
        }

        printf("\n");
    }

    return 0;
}
