#include <stdio.h>

int main() {
    int NILAI1, NILAI2;

    printf("Input: \n");
    scanf("%d %d", &NILAI1, &NILAI2);

    printf("Output: \n");
    if (NILAI1 > NILAI2) {
        for (int i = NILAI1; i >= NILAI2; i--) {
            printf("%d %d", i, NILAI1 + NILAI2 - i);
            if (i != NILAI2) {
                printf(" - ");
            }
        }
    } else {
        for (int i = NILAI1; i <= NILAI2; i++) {
            printf("%d %d", i, NILAI1 + NILAI2 - i);
            if (i != NILAI2) {
                printf(" - ");
            }
        }
    }

    return 0;
}
