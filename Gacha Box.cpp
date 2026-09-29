#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

using namespace std;

int main() {
    cout << "=== EVENT BOX GACHA (9 ITEM) ===\n";
    vector<int> harga_spin = {9, 18, 39, 69, 129, 249, 499, 799, 999};
    vector<string> isi_box = {"Ampas", "Ampas", "Ampas", "Ampas", "Ampas", "Ampas", "Ampas", "Ampas", "Grace Ashcroft : Film Noir (JACKPOT)"};
    
    random_device rd;
    mt19937 gen(rd());
    shuffle(isi_box.begin(), isi_box.end(), gen);
    
    for(int i = 0; i < 9; i++) {
        int harga = harga_spin[i];
        cout << "\n[Putaran " << i+1 << "/9] Koin yang diperlukan: " << harga << "\n";
        
        int koin;
        while(true) {
            cout << "Masukkan koin yang Anda punya: ";
            cin >> koin;
            if(koin >= harga) break; // Koin cukup, keluar dari loop input
            cout << "Koin tidak cukup! Silakan top-up (masukkan angka yang lebih besar).\n";
        }
        
        string item = isi_box.front();
        isi_box.erase(isi_box.begin());
        
        cout << ">>> SPINNING... Kamu dapat: " << item << "!\n";
        
        if(item == "Grace Ashcroft : Film Noir (JACKPOT)") {
            cout << "🔥 SELAMAT! Kamu berhasil mendapatkan item langka!\n";
            break;
        }
        
        char lanjut;
        cout << "Lanjut ke putaran berikutnya? (y/n): ";
        cin >> lanjut;
        if(lanjut != 'y' && lanjut != 'Y') {
            cout << "Sayang sekali berhenti di tengah jalan...\n";
            break;
        }
    }
    return 0;
}