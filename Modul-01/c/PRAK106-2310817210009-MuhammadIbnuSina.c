#include <stdio.h>

int main() {
    float a, b, c;

    // Menggunakan scanf untuk menerima input dari pengguna
    printf("Variabel a bernilai ");
    scanf("%f", &a);
    
    printf("Variabel b bernilai ");
    scanf("%f", &b);
    
    printf("Variabel c bernilai ");
    scanf("%f", &c);

    // Melakukan perbandingan dan mencetak hasilnya
    int a_sama_dengan_b = (a == b);
    int b_lebih_besar_dari_c = (b > c);
    int a_tidak_sama_dengan_c = (a != c);

    printf("Apakah a sama dengan b ? jawabannya adalah %d\n", a_sama_dengan_b);
    printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n", b_lebih_besar_dari_c);
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d\n", a_tidak_sama_dengan_c);

    return 0;
}
