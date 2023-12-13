#include <stdio.h>

void getInput(char array[100]) {
    scanf("%[^\n]%*c", array);
}

int countCharacters(char array[100]) {
    int count = 0;
    for (int i = 0; i < 100; i++) {
        if (array[i] == '\0') {
            break;
        } else {
            count++;
        }
    }
    return count;
}

void printComparison(char pesan1[], char pesan2[], int count) {
    int bintang = 0;
    int pagar = 0;
    for (int y = 0; y < count; y++) {
        if (pesan1[y] == ' ' && pesan2[y] == ' ') {
            printf(" ");
        } else if (pesan1[y] == pesan2[y]) {
            printf("*");
            bintang++;
        } else if (pesan1[y] != pesan2[y]) {
            printf("#");
            pagar++;
        }
    }
    printf("\n");
    printf("* = %d\n", bintang);
    printf("# = %d\n", pagar);
    if (bintang >= pagar) {
        printf("Pesan Asli");
    } else {
        printf("Pesan Palsu");
    }
}

int main() {
    char array1[100];
    char array2[100];

    getInput(array1);
    getInput(array2);

    int count1 = countCharacters(array1);
    int count2 = countCharacters(array2);

    if (count1 == count2) {
        char pesan1[count1];
        char pesan2[count2];

        for (int x = 0; x < count1; x++) {
            pesan1[x] = array1[x];
            pesan2[x] = array2[x];
        }

        printComparison(pesan1, pesan2, count1);
    } else {
        printf("Panjang kalimat berbeda, pesan palsu");
    }

    return 0;
}
