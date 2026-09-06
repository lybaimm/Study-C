#include <stdio.h>

void hitungLuasKeliling(int panjang, int lebar, int *luas, int *keliling) {
    *luas = panjang * lebar;
    *keliling = 2 * (panjang + lebar);
}

int main () {
    int panjang, lebar, luas, keliling;
    printf("Masukan panjang : ");
    scanf("%d", &panjang);
    printf("Masukan lebar : ");
    scanf("%d", &lebar);
    hitungLuasKeliling(panjang, lebar, &luas, &keliling);
    printf("Luas: %d\n", luas);
    printf("Keliling: %d\n", keliling);
    return 0;
}