#include <stdio.h>

int main() {
    int ANGKA1, ANGKA2;

printf("Input: \n");
    scanf("%d %d", &ANGKA1, &ANGKA2);

    if (ANGKA1 > ANGKA2) {
        int temp = ANGKA1;
        ANGKA1 = ANGKA2;
        ANGKA2 = temp;
    }

printf("\nOutput: \n");
    printf("%d %d", ANGKA1, ANGKA2);

    return 0;
}