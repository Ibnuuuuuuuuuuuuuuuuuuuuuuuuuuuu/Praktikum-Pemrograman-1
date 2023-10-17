#include <stdio.h>

int main() {
    char nama[50], nim[20], kelas[15], ttl[100], alamat[100], hobby[50], no_hp[20];

    printf("Input: \n");
    printf("Nama: ");
    fgets(nama, 50, stdin);

    printf("NIM: ");
    fgets(nim, 20, stdin);

    printf("Kelas Paralel: ");
    fgets(kelas, 15, stdin);

    printf("Tempat/Tanggal Lahir: ");
    fgets(ttl, 100, stdin);

    printf("Alamat: ");
    fgets(alamat, 100, stdin);

    printf("Hobby: ");
    fgets(hobby, 50, stdin);

    printf("No. HP: ");
    fgets(no_hp, 20, stdin);

    printf("\n\nOutput: \n");
    printf("Nama: %s", nama);
    printf("NIM: %s", nim);
    printf("Kelas Paralel: %s", kelas);
    printf("Tempat/Tanggal Lahir: %s", ttl);
    printf("Alamat: %s", alamat);
    printf("Hobby: %s", hobby);
    printf("No. HP: %s", no_hp);

    return 0;
}