#include <stdio.h>

int main() {
    int X, Z;
    scanf("%d %d", &X, &Z);
    int TOTAKKESELURUHAN=0, PERHITUNGANBARIS=0;

    for (int I = 1; I < X+1; I++) {
        for (int B = I; B > 0; B--) {
            if (B > 1) {
                int hasilTunggal = (B * Z);
                PERHITUNGANBARIS = PERHITUNGANBARIS + hasilTunggal;
                printf("(%d * %d) + ", B, Z);
            }
            else if (B == 1) {
                int hasilTerakhir = (B * Z);
                PERHITUNGANBARIS = PERHITUNGANBARIS + hasilTerakhir;
                printf("(%d * %d) = %d\n", B, Z, PERHITUNGANBARIS);
                TOTAKKESELURUHAN = TOTAKKESELURUHAN + PERHITUNGANBARIS;
                PERHITUNGANBARIS = 0;
            }
        }
    }
    printf("%d", TOTAKKESELURUHAN);
    return 0;
}