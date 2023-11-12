#include <stdio.h>

int main() {
    while (1) {

        printf("\nPilih Program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");

        char PILIHAN;
        printf("Masukkan Pilihan : ");
        scanf("%d", &PILIHAN);

        float ANGKAPERTAMA, ANGKAKEDUA, HASIL;
        if (PILIHAN == 5) {
            printf("Terimakasih, telah menggunakan kalkulator MUHAMMAD IBNU SINA\n");
            break;
        } else if (PILIHAN == 1) {
            printf("Masukkan nilai pertama : ");
            scanf("%f", &ANGKAPERTAMA);
            printf("Masukkan nilai kedua : ");
            scanf("%f", &ANGKAKEDUA);
            HASIL = ANGKAPERTAMA + ANGKAKEDUA;
            printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", ANGKAPERTAMA, ANGKAKEDUA, HASIL);
        } else if (PILIHAN == 2) {
            printf("Masukkan nilai pertama : ");
            scanf("%f", &ANGKAPERTAMA);
            printf("Masukkan nilai kedua : ");
            scanf("%f", &ANGKAKEDUA);
            HASIL = ANGKAPERTAMA - ANGKAKEDUA;
            printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", ANGKAPERTAMA, ANGKAKEDUA, HASIL);
        } else if (PILIHAN == 3) {
            printf("Masukkan nilai pertama : ");
            scanf("%f", &ANGKAPERTAMA);
            printf("Masukkan nilai kedua : ");
            scanf("%f", &ANGKAKEDUA);
            HASIL = ANGKAPERTAMA * ANGKAKEDUA;
            printf("Hasil pengkalian antara %.2f dengan %.2f adalah %.2f\n", ANGKAPERTAMA, ANGKAKEDUA, HASIL);
        } else if (PILIHAN == 4) {
            printf("Masukkan nilai pertama : ");
            scanf("%f", &ANGKAPERTAMA);
            printf("Masukkan nilai kedua : ");
            scanf("%f", &ANGKAKEDUA);
            HASIL = ANGKAPERTAMA / ANGKAKEDUA;
            printf("Hasil penmbagian antara %.2f dengan %.2f adalah %.2f\n", ANGKAPERTAMA, ANGKAKEDUA, HASIL);
        } else {
            printf("Input anda salah, silahkan coba lagi\n");
        }   
    }
    return 0;
}