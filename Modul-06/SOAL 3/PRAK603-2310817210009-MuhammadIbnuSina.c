#include <stdio.h>
#include <stdlib.h>

int main() {
    int A, B;
    printf("Input: \n");
    scanf("%d %d", &A, &B);

    if (A != B) {
        printf("\nJumlah tidak sama\n");
    }

    int array1[A];
    int array2[A];

    for (int i = 0; i < A; i++) {
        scanf("%d", &array1[i]);
    }

    for (int i = 0; i < A; i++) {
        scanf("%d", &array2[i]);
    }

    printf("\nOutput: \n");

    for (int i = 0; i < A; i++) {
        printf("%d ", array1[i] * array2[i]);
    }

    return 0;
}
