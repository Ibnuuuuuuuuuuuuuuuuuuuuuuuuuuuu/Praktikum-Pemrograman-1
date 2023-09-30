#include <stdio.h>

int main() {
    float a, b, x, y, hasil;

    printf("Variabel a bernilai: ");
    scanf("%f", &a);
    printf("Variabel b bernilai: ");
    scanf("%f", &b);
    printf("Variabel x bernilai: ");
    scanf("%f", &x);
    printf("Variabel y bernilai: ");
    scanf("%f", &y);

    hasil = (a + b) * x / y;

    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2f\n", hasil);

    return 0;
}
