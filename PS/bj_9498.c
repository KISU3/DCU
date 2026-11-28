#include <stdio.h>

int gA;

void board(int score) {
    if (score >= 90) {
        printf("A\\n");
    } else if (score >= 80) {
        printf("B\\n");
    } else if (score >= 70) {
        printf("C\\n");
    } else if (score >= 60) {
        printf("D\\n");
    } else {
        printf("F\\n");
    }
}

int main(void) {
    scanf("%d", &gA);
    board(gA);

    return 0;
}
