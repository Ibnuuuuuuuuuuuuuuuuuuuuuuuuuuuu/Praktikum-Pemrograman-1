#include <stdio.h>
#include <math.h>

int main() {
    {    
    float alas, tinggi;
    printf("Diketahui :\nAlas = ");
    scanf("%f cm", &alas);

    printf("Tinggi = ");
    scanf("%f cm", &tinggi);
}


    float alas = 5, tinggi = 12;
    float sisiA = tinggi;
    float sisiB = sqrt(pow(tinggi, 2) + pow(alas, 2));
    float sisiC = alas;
    float keliling = sisiA + sisiB + sisiC;
    float luas = 0.5 * alas * tinggi;

    printf("\nJawab :\nSisi A = %.0f cm\n", sisiA);
    printf("Sisi B = %.0f cm\n", sisiB);
    printf("Sisi C = %.0f cm\n", sisiC);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm\n", luas);

    return 0;
}