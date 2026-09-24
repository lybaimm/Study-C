#include <stdio.h>

struct Jam {
    int jam;
    int menit;
    int detik;
};

int main() {
    struct Jam m1 = {14, 00, 00};

    m1.detik = m1.detik + 60;
    printf("Jam : %d \n", m1.jam);
    printf("Menit : %d \n", m1.menit);
    printf("Detik : %d \n", m1.detik);

    m1.menit = m1.menit + 1;
    printf("Jam : %d \n", m1.jam);
    printf("Menit : %d \n", m1.menit);
    printf("Detik : %d \n", m1.detik);

    m1.jam = m1.jam + 1;
    printf("Jam : %d \n", m1.jam);
    printf("Menit : %d \n", m1.menit);
    printf("Detik : %d \n", m1.detik);

    return 0;

}