#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_TOSSES 100000

int main() {
    int tosses;
    int results[MAX_TOSSES];
    int heads = 0, tails = 0;
    double pHead, pTails;

    srand(time(0));

    printf("Enter the number of coin tosses (max %d): ", MAX_TOSSES);
    scanf("%d", &tosses);

    if (tosses > MAX_TOSSES) {
        printf("The number of tosses exceeds..");
        return 1;
    }

    
    for (int i = 0; i < tosses; i++) {
        results[i] = rand() % 2;
    }

    for (int i = 0; i < tosses; i++) {
        if (results[i] == 0) {
            heads++;
        } else {
            tails++;
        }
    }

    pHead = (double)heads / tosses;
    pTails = (double)tails / tosses;

    
    printf("Probability of Heads: %lf\n", pHead);
    printf("Probability of Tails: %lf\n", pTails);

    return 0;
}