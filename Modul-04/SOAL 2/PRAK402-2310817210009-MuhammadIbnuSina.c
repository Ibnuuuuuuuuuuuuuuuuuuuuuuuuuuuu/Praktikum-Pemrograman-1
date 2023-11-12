#include <stdio.h>

int main() {
    int MAKS, BIL;

    printf("Input: \n");
    scanf("%d", &MAKS);

    printf("Output: \n");
    for (BIL = 1; BIL <= MAKS; BIL++) {
        if (BIL % 2 != 0) {
            printf("%d ", BIL);
        }
    }
    printf("\n");
    for (BIL = MAKS; BIL >= 2; BIL--) {
        if (BIL % 2 == 0) {
            printf("%d ", BIL);
        }
    }

    return 0;
}
