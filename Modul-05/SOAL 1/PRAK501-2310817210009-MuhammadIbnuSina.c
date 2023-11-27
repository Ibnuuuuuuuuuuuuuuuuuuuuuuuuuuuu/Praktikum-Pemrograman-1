#include <stdio.h>

int MAXBILANGAN(int A, int B, int C, int D) {
    int MAX = A;
    if (B > MAX) {
        MAX = B;
    }
    if (C > MAX) {
        MAX = C;
    }
    if (D > MAX) {
        MAX = D;
    }
    return MAX;
}

int main() {
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    int HASIL = MAXBILANGAN(A, B, C, D);
    printf("%d", HASIL);
    return 0;
}
