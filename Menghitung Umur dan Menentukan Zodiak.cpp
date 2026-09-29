#include <iostream>
#include <string>
using namespace std;

int main() {
    int tanggal_lahir, bulan_lahir, tahun_lahir;
    int tahun_sekarang = 2025;
    int umur;
    string zodiak;

    cout<<"Masukan tanggal lahir (contoh: 24): ";
    cin>>tanggal_lahir;
    cout<<"Masukan bulan lahir (1-12, contoh: 10 untuk Oktober): ";
    cin>>bulan_lahir;
    cout<<"Masukan tahun lahir (contoh: 2006): ";
    cin>>tahun_lahir;

    umur = tahun_sekarang - tahun_lahir;

    if (umur < 17) {
        cout<<"\nPeringatan! Umur anda belum cukup untuk mengakses data!" <<endl;
        cout<<"Umur anda: "<<umur<<" tahun"<<endl;
        cout<<"Program telah berhenti."<<endl;
        return 0; 
    } else {
        cout<<"\nUmur anda: "<<umur<<" tahun"<<endl;
        cout<<"Selamat! Umur anda sudah cukup untuk mengakses data!" <<endl;
    }

    if ((bulan_lahir == 12 && tanggal_lahir >= 22) || (bulan_lahir == 1 && tanggal_lahir <= 19)) {
        zodiak = "Capricorn";
    } else if ((bulan_lahir == 1 && tanggal_lahir >= 20) || (bulan_lahir == 2 && tanggal_lahir <= 18)) {
        zodiak = "Aquarius";
    } else if ((bulan_lahir == 2 && tanggal_lahir >= 19) || (bulan_lahir == 3 && tanggal_lahir <= 20)) {
        zodiak = "Pisces";
    } else if ((bulan_lahir == 3 && tanggal_lahir >= 21) || (bulan_lahir == 4 && tanggal_lahir <= 19)) {
        zodiak = "Aries";
    } else if ((bulan_lahir == 4 && tanggal_lahir >= 20) || (bulan_lahir == 5 && tanggal_lahir <= 20)) {
        zodiak = "Taurus";
    } else if ((bulan_lahir == 5 && tanggal_lahir >= 21) || (bulan_lahir == 6 && tanggal_lahir <= 20)) {
        zodiak = "Gemini";
    } else if ((bulan_lahir == 6 && tanggal_lahir >= 21) || (bulan_lahir == 7 && tanggal_lahir <= 22)) {
        zodiak = "Cancer";
    } else if ((bulan_lahir == 7 && tanggal_lahir >= 23) || (bulan_lahir == 8 && tanggal_lahir <= 22)) {
        zodiak = "Leo";
    } else if ((bulan_lahir == 8 && tanggal_lahir >= 23) || (bulan_lahir == 9 && tanggal_lahir <= 22)) {
        zodiak = "Virgo";
    } else if ((bulan_lahir == 9 && tanggal_lahir >= 23) || (bulan_lahir == 10 && tanggal_lahir <= 22)) {
        zodiak = "Libra";
    } else if ((bulan_lahir == 10 && tanggal_lahir >= 23) || (bulan_lahir == 11 && tanggal_lahir <= 21)) {
        zodiak = "Scorpio";
    } else if ((bulan_lahir == 11 && tanggal_lahir >= 22) || (bulan_lahir == 12 && tanggal_lahir <= 21)) {
        zodiak = "Sagitarius";
    } else {
        zodiak = "Tidak Diketahui";
    }

    cout<<"Zodiak Anda adalah: " << zodiak <<endl;

    return 0;
}
