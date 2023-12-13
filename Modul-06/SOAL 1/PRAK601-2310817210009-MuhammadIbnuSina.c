#include <stdio.h>

int main() {
    int BARIS, KOLOM;

    printf("Input: \n");
    scanf("%d %d", &BARIS, &KOLOM);

    int MATRIKS[BARIS][KOLOM];

    for (int i = 0; i < BARIS; i++) {
        for (int b = 0; b < KOLOM; b++) {
            scanf("%d", &MATRIKS[i][b]);
        }
    }
    printf("\nOutput: \n");
    for (int i = 0; i < BARIS; i++) {
        for (int b = 0; b < KOLOM; b++) {
            printf("%d ", MATRIKS[i][b]);
        }
        printf("\n");
    }

    return 0;
}
