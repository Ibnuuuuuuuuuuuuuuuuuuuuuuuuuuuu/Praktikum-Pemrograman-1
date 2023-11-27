#include <stdio.h>
#include <math.h>

int MUTLAK(int NILAI){
    return (NILAI < 0) ? -NILAI : NILAI;
}

int HITUNG(int NILAI1, int NILAI2){
    return MUTLAK(NILAI1 - NILAI2);
}

int main() {
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    int hasil = HITUNG(x1, x2) + HITUNG(y1, y2);
    printf("%d\n",MUTLAK(hasil));

    return 0;
}
