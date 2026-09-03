#include <stdio.h>

struct Jam {
    int jam;
    int menit;
    int detik;
};

struct Jam jumlahkan_Jam(struct Jam j1, struct Jam j2) {
    struct Jam hasil;
    
    hasil.detik = j1.detik + j2.detik;
    hasil.menit = j1.menit + j2.menit;
    hasil.jam = j1.jam + j2.jam;

    if (hasil.detik >= 60) {
        hasil.menit += hasil.detik /60;
        hasil.detik = hasil.detik %60;
    }
    if (hasil.menit >= 60) {
        hasil.jam += hasil.menit /60;
        hasil.menit = hasil.menit %60;
    }
    
    return hasil;
}

int main() {
    struct Jam waktu1 = {10, 45, 50};
    struct Jam waktu2 = {02, 30, 25};
    struct Jam total;
    
    total = jumlahkan_Jam(waktu1, waktu2);
    
    printf("Waktu 1: %02d : %02d : %02d \n", waktu1.jam, waktu1.menit, waktu1.detik);
    printf("Waktu 2: %02d : %02d : %02d \n", waktu2.jam, waktu2.menit, waktu2.detik);
    printf("Total  : %02d : %02d : %02d \n", total.jam, total.menit, total.detik);
    
    return 0;
}