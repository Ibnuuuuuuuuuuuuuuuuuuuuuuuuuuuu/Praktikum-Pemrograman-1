#include <stdio.h>

int main() {
    int Nilaiinputan;
    printf("Input: \n");
    scanf("%d", &Nilaiinputan);

    printf("Output: \n");
    if (Nilaiinputan > 0) {
        printf("Positif\n", Nilaiinputan);
    } else if (Nilaiinputan < 0) {
        printf("Negatif\n", Nilaiinputan);
    } else {
        printf("Nol\n", Nilaiinputan);
    }

    return 0;
}