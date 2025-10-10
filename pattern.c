#include <stdio.h>
int main() {
    int i, j, space;
    for (i = 1; i <= 4; i++) {

        for (space =0; space <= 4 - i; space++) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}