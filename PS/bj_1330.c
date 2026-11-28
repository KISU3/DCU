#include <stdio.h>

int gA, gB;

void compare(int A, int B) {
    if (A > B) {
        printf(">\n");
    } else if (A < B) {
        printf("<\n");
    } else {
        printf("==\n");
    }
}

int main(void) {
    scanf("%d %d", &gA, &gB);

    compare(gA, gB);

    return 0;
}
