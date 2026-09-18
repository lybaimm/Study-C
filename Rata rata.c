#include <stdio.h>
int main() {
    int n, angka, jumlah = 0;
    printf("Masukkan jumlah bilangan: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        printf("Masukkan bilangan ke-%d: ", i);
        scanf("%d", &angka);
        jumlah += angka;
    }

    float rata_rata = (float)jumlah / n;
    printf("Rata-rata: %.2f\n", rata_rata);
    return 0;
}