#include <stdio.h>

int main() {
    double nilaiPertama, nilaiKedua;
    
    printf("Input: ");
    printf("\nMasukkan Nilai Pertama: ");
    scanf("%lf", &nilaiPertama);
    
    printf("Masukkan Nilai Kedua: ");
    scanf("%lf", &nilaiKedua);
    
    double hasil = nilaiPertama + nilaiKedua;
    
    if (nilaiPertama == (int)nilaiPertama) {
        printf("Output: ");
        printf("\nHasil dari penjumlahan nilai pertama \"%.0lf\" dan nilai kedua \"%.1lf\" adalah \"%.2lf\"\n", nilaiPertama, nilaiKedua, hasil);
    } else {
        printf("Output: ");
        printf("\nHasil dari penjumlahan nilai pertama \"%.2lf\" dan nilai kedua \"%.1lf\" adalah \"%.2lf\"\n", nilaiPertama, nilaiKedua, hasil);
    }
    
    return 0;
}