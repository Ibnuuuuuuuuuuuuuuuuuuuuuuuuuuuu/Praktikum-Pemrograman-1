#include <stdio.h>

int main() {
    // Deklarasi variabel
    float Kilometer, putaran, jariJari;

    // Input jarak tempuh dan putaran
        printf("Diketahui :\nPak Dengklek mengelilingi taman = ");
    scanf("%f Putaran", &putaran);

    printf("Jarak Tempuh Pak Dengklek = ");
    scanf("%f Kilometer", &Kilometer);

    // Menghitung jari-jari taman
    jariJari = Kilometer / (2 * 3.14159265359 * putaran);

    // Menampilkan hasil
    printf("\nJawaban :\nJari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jariJari);

    return 0;
}
