#include <stdio.h>

int main() {
    float x, y, z;

    printf("Variabel x bernilai: ");
    scanf("%f", &x);

    printf("Variabel y bernilai: ");
    scanf("%f", &y);

    printf("Variabel z bernilai: ");
    scanf("%f", &z);

    float jumlah = x + y + z;

    printf("Jumlah variabel tersebut adalah %.0f\n", jumlah);

    return 0;
}
