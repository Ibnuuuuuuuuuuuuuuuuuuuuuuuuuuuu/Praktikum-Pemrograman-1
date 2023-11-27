#include <stdio.h>

int REVERSE(int num) {
    int REVERSED = 0;
    while (num > 0) {
        REVERSED = REVERSED * 10 + num % 10;
        num /= 10;
    }
    return REVERSED;
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    A = REVERSE(A);
    B = REVERSE(B);

    int C = A + B;
    printf("%d", REVERSE(C));

    return 0;
}
