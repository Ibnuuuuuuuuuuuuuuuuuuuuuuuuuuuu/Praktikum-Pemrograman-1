#include <stdio.h>

int main() {
    float totalPasukan, jumlahPahlawan;

    // Input jumlah pasukan yang dibawa Yu Zhong
    printf("Jumlah pasukan yang dibawa Yu Zhong: ");
    scanf("%f", &totalPasukan);

    // Input jumlah pahlawan
    printf("Jumlah pahlawan: ");
    scanf("%f", &jumlahPahlawan);

    // Menghitung jumlah pasukan yang harus dikalahkan setiap pahlawan
    float pasukanPerPahlawan = totalPasukan / jumlahPahlawan;

    // Menampilkan hasil
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %.0f pasukan\n", pasukanPerPahlawan);

    return 0;
}
