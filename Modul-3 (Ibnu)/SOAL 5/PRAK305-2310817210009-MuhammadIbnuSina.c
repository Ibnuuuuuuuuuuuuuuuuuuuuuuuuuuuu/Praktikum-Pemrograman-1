#include <stdio.h>
int main(){
    int BILANGAN, SISA, DETIK, MENIT, JAM, JAM2, HARI;

    printf("Input: \n");
    scanf("%d", &BILANGAN);

    HARI = BILANGAN / 86400;
    SISA = BILANGAN % 86400;
    JAM = SISA / 3600;
    JAM2= BILANGAN /3600;
    MENIT = (BILANGAN - (JAM2 * 3600))/60;
    DETIK = BILANGAN % 60;

printf("\nOutput: \n");
    if(BILANGAN >= 86400){
        printf("%d hari %02d:%02d:%02d", HARI, JAM, MENIT, DETIK);
    }else if (BILANGAN >= 3600 && BILANGAN <86400){
        printf("%02d:%02d:%02d", JAM, MENIT, DETIK);
    }else if (BILANGAN > 60 && BILANGAN <3600){
        printf("00:%02d:%02d", MENIT, DETIK);
    }else{
        printf("%02d:%02d:%02d", DETIK);
}
}