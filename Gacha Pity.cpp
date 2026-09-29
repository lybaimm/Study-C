#include <iostream>
#include <random>

using namespace std;

int main() {
    cout << "=== SIMULASI GACHA PITY 0/90 ===\n";
    int pity = 0;
    int total_pengeluaran = 0;
    
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> dis(0.0, 100.0);
    
    while(true) {
        cout << "\n[Status Pity Sekarang: " << pity << "/90]\n";
        int koin;
        cout << "Masukkan koin untuk gacha (1x Roll = 160 koin)\n(10x Roll = 1600 koin): ";
        cin >> koin;
        
        int rolls = koin / 160;
        int sisa_koin = koin % 160;
        
        if(rolls == 0) {
            cout << "Koin kurang dari 160! Gagal roll, silakan top-up.\n";
            continue; // Ulangi dari awal
        }
        
        cout << "Memulai " << rolls << "x Roll...\n";
        total_pengeluaran += (rolls * 160);
        
        for(int i = 1; i <= rolls; i++) {
            pity++;
            double rate = (pity == 90) ? 100.0 : ((pity >= 80) ? 20.0 : 0.6);
            double rng = dis(gen);
            
            if(rng <= rate) {
                cout << "Roll " << i << ": 🎉 [JACKPOT!] Bintang 5 keluar di Pity " << pity << "!\n";
                pity = 0; // Pity reset
            } else {
                cout << "Roll " << i << ": 🗑️ Ampas... (Pity: " << pity << "/90)\n";
            }
        }
        
        cout << "Sisa koin kamu: " << sisa_koin << "\n";
        
        char lanjut;
        cout << "Masih belum puas? Mau lanjut gacha lagi? (y/n): ";
        cin >> lanjut;
        if(lanjut != 'y' && lanjut != 'Y') {
            cout << "\nTotal koin yang dihabiskan: " << total_pengeluaran << "\n";
            cout << "Game Over. Terima kasih sudah menguras dompet Anda!\n";
            break; // Keluar dari loop
        }
    }
    return 0;
}