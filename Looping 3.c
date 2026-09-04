#include <stdio.h>

int main() {
    int n, terkecil;

    printf("Masukkan bilangan ke-1: ");
    scanf("%d", &n);
    terkecil=n;

    for(int i=2; i<=10; i++) {
        printf("Masukkan bilangan ke-%d: ", i);
        scanf("%d", &n);
        if(n<terkecil) {
            terkecil=n;
        }
    }

    printf("Bilangan terkecil adalah: %d\n", terkecil);
    return 0;
}