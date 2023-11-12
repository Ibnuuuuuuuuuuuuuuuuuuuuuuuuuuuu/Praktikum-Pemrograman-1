#include <stdio.h>

int main() {
    int ANGKAKELIPATAN;
    char SIMBOL;

    printf("Input: \n");
    scanf("%d", &ANGKAKELIPATAN);
    scanf(" %c", &SIMBOL);

    printf("Output: \n");
    for (int i = 1; i <= 50; i++) {
        if (i % ANGKAKELIPATAN == 0) {
            printf("%c ", SIMBOL);
        } else {
            printf("%d ", i);
        }
    }

    return 0;
}
