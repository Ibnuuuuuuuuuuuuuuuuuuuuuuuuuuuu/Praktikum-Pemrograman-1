#include <stdio.h>

int main() {
    float a, b, x, y;

    printf("Variabel a bernilai: ");
    scanf("%f", &a);

    printf("Variabel b bernilai: ");
    scanf("%f", &b);

    printf("Variabel x bernilai: ");
    scanf("%f", &x);

    printf("Variabel y bernilai: ");
    scanf("%f", &y);

    float sisa_a_b = a - ((int)(a / b) * b);
    float sisa_x_y = x - ((int)(x / y) * y);

    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d\n", (int)(sisa_a_b + sisa_x_y));

    return 0;
}
