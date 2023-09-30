#include <stdio.h>

int main() {
    float sisi1, sisi2, sisi3;
    float keliling_tanah, harga_per_meter, biaya;

    // Input panjang sisi segitiga
    printf("Diketahui : \nPanjang sisi segitiga berturut-turut adalah ");
    scanf("%f, %f, dan %f", &sisi1, &sisi2, &sisi3);

    // Input keliling tanah
    printf("Keliling Tanah Pak Dengklek adalah ");
    scanf("%f", &keliling_tanah);

    // Input harga tanah per meter
    printf("Harga Tanah Per Meter adalah ");
    scanf("%f", &harga_per_meter);

    // Menghitung biaya yang diperlukan
    biaya = keliling_tanah * harga_per_meter;

    // Menampilkan hasil
    printf("Jawaban : \nBiaya yang diperlukan Pak Dengklek adalah : Rp %.0f\n", biaya);

    return 0;
}
