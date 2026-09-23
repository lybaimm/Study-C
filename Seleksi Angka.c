#include <stdio.h>

int main() {
    int angka;
    
    printf("Masukan angka: ");
    scanf("%d", &angka);

    if(angka > 0) {
        printf("angka positif");
    } else if(angka < 0) {
        printf("angka negatif");
    } else if(angka == 0) {
        printf("angka nol");
    }
    return 0;
}