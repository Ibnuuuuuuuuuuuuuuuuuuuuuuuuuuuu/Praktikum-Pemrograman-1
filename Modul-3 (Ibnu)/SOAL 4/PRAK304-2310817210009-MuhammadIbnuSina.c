#include <stdio.h>

int main(){
    int Wilangan;

    printf("Input:\n ");
    scanf("%d", &Wilangan);

    printf("Output:\n");
    if(Wilangan>=100){
    printf("Anda Menginput Bilangan Melebihi Limit");
    }else if(Wilangan>1 && Wilangan<10){
        printf("Satuan");
    }else if (Wilangan>9 && Wilangan<20){
        printf("Belasan");
    }else if(Wilangan>=20 && Wilangan<100){
        printf("Puluhan");
    }else {
        printf("Nol");
    }
}