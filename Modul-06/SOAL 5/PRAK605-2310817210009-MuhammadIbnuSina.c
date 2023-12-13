#include <stdio.h>

void inputMatriks(int ordo, int matriks[ordo][ordo]) {
    for (int i = 0; i < ordo; i++) {
        for (int j = 0; j < ordo; j++) {
            scanf("%d", &matriks[i][j]);
        }
    }
}

void multiplyMatrices(int ordo, int matriksA[ordo][ordo], int matriksB[ordo][ordo], int result[ordo][ordo]) {
    for (int i = 0; i < ordo; i++) {
        for (int j = 0; j < ordo; j++) {
            result[i][j] = 0;
            for (int x = 0; x < ordo; x++) {
                result[i][j] += matriksA[i][x] * matriksB[x][j];
            }
        }
    }
}

void printMatriks(int ordo, int matriks[ordo][ordo]) {
    printf("Matriks AXB:\n");
    for (int i = 0; i < ordo; i++) {
        for (int j = 0; j < ordo; j++) {
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int ordo;
    scanf("%d", &ordo);

    int matriksA[ordo][ordo];
    int matriksB[ordo][ordo];
    int matriksAXB[ordo][ordo];

    printf("Matriks A\n");
    inputMatriks(ordo, matriksA);

    printf("Matriks B\n");
    inputMatriks(ordo, matriksB);

    multiplyMatrices(ordo, matriksA, matriksB, matriksAXB);

        printf("\n");
    printMatriks(ordo, matriksAXB);

    return 0;
}