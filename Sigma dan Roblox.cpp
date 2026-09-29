#include <iostream>
using namespace std;

int main() {
    int hariKerja;
    cout << "Masukkan berapa hari Sigma bekerja: ";
    cin >> hariKerja;

    int produksi = 5;          
    int totalTelur = 0;
    
    for (int i = 1; i <= hariKerja; i++) {
        totalTelur += produksi;
        produksi += 2; 
    }
    
    int jumlahTutup = hariKerja / 3;        
    int mainRoblox = jumlahTutup * 5;       

    cout << "\n=== HASIL ===\n";
    cout << "Total telur yang diproduksi: " << totalTelur << endl;
    cout << "Jumlah kali tutup toko: " << jumlahTutup << endl;
    cout << "Jumlah kali main Roblox: " << mainRoblox << endl;
    
    return 0;
}
