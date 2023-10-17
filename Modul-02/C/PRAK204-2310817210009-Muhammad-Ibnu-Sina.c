#include <stdio.h>

int main() {
    float phi = 3.142857;
    float r, t;

    printf("Input: \n");
    scanf("%f %f", &r, &t);

    float volume = phi * r * r * t;
    float luas = 2 * phi * r * (r + t);
    float keliling = 2 * phi * r;

    printf("Output: \n");
    printf("Volume : %.2f\n", volume);
    printf("Luas : %.2f\n", luas);
    printf("Keliling : %.2f\n", keliling);

    return 0;
}
