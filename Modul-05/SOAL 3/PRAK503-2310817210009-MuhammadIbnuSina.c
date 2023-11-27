#include <stdio.h>

int MAKSIMAL(int A, int B) {
    return (A > B) ? A : B;
}

int MINIMAL(int A, int B) {
    return (A < B) ? A : B;
}

int main() {
    int batas = 0;
    int maks = -100000;
    int minim = 100000;
    int bilangan;

    scanf("%d", &bilangan);

    while (batas < bilangan) {
        int nilai;
        scanf("%d", &nilai);
        maks = MAKSIMAL(maks, nilai);
        minim = MINIMAL(minim, nilai);
        batas++;
    }

    printf("%d %d", maks, minim);

    return 0;
}
