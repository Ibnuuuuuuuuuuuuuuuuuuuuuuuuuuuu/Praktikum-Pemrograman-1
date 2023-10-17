#include <stdio.h>
#include <math.h>

int main(){

    int TINGGI, MIRING;

    printf("Input: \n");
    scanf("%d", &TINGGI);
    scanf("%d", &MIRING);

    int alas = sqrt(pow(MIRING,2)-(pow(TINGGI,2)));
    int tinggi = TINGGI;
    int keliling = TINGGI + MIRING + alas;
    int luas = 0.5 * alas * tinggi;

    printf("\nOutput: \nAlas = %d cm\n", alas);
    printf("tinggi = %d cm\n", tinggi);
    printf("keliling = %d cm\n", keliling);
    printf("Luas = %d cm^2\n", luas);

return 0;
}