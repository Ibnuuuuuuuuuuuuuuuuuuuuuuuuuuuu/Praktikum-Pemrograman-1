#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Variabel a bernilai: ");
    scanf("%d", &a);
    
    printf("Variabel b bernilai: ");
    scanf("%d", &b);
    
    printf("Variabel c bernilai: ");
    scanf("%d", &c);
    
    float hasil = (float)(a * b) / c;
    
    printf("Hasil dari a dikali b dibagi c adalah %.6f\n", hasil);
    
    return 0;
}
