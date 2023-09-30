#include <stdio.h>

int main() {
    float hargaSepatuA, hargaSepatuB;
    
    printf("Harga sepatu A adalah: ");
    scanf("%f", &hargaSepatuA);
    
    printf("Harga sepatu B adalah: ");
    scanf("%f", &hargaSepatuB);
    
    // Menghitung harga setelah diskon 13% untuk sepatu A
    float diskonA = 0.13 * hargaSepatuA;
    float hargaDiskonA = hargaSepatuA - diskonA;
    
    // Menghitung harga setelah diskon 21% untuk sepatu B
    float diskonB = 0.21 * hargaSepatuB;
    float hargaDiskonB = hargaSepatuB - diskonB;
    
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %.0f\n", hargaDiskonA);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %.0f\n", hargaDiskonB);
    
    return 0;
}
