#include <stdio.h>

int main() {
    int ANGKO;
    char CONVERSIHURUF;

    printf("Input: ");
    scanf("%d", &ANGKO);

    if (ANGKO >= 80) {
        CONVERSIHURUF = 'A';
    } else if (ANGKO >= 70) {
        CONVERSIHURUF = 'B';
    } else if (ANGKO >= 60) {
        CONVERSIHURUF = 'C';
    } else if (ANGKO >= 50) {
        CONVERSIHURUF = 'D';
    } else {
        CONVERSIHURUF = 'E';
    }

    printf("Output:\n %c", CONVERSIHURUF);

    return 0;
}