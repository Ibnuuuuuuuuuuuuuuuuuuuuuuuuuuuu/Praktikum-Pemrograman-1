#include <stdio.h>

int main() {
    int TOTALRUANGAN, i;
    printf("Input: \n");
    scanf("%d", &TOTALRUANGAN);

    int ZETSUPUTIH[TOTALRUANGAN];
    for (i = 0; i < TOTALRUANGAN; i++) {
        scanf("%d", &ZETSUPUTIH[i]);
    }
    for (i = 0; i < TOTALRUANGAN; i++) {
        ZETSUPUTIH[i] = ZETSUPUTIH[i] * (i + 1);
    }

    printf("\nOutput: \n");
    for (i = 0; i < TOTALRUANGAN; i++) {
        printf("%d ", ZETSUPUTIH[i]);
    }

    return 0;
}