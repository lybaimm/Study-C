#include <stdio.h>

int main() {
    int n, i=1, sum=0;
    printf("Masukkan bilangan: ");
    scanf("%d", &n);
    while (i<=n) {
        sum+=i;
        i++;
    }
    printf("Jumlah dari 1 sampai %d adalah %d\n", n, sum);

    return 0;
}