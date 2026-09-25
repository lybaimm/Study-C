#include <iostream>
#include <string>

using namespace std;

const int MAX_QUEUE = 100;
const int MAX_HISTORY = 100;

//struktur data queue untuk antrian pasien
struct Queue {
    string pasien[MAX_QUEUE];
    int front;
    int rear;
    
    Queue() {
        front = -1;
        rear = -1;
    }
    
    //enqueue = menambah pasien ke antrian
    bool enqueue(string nama) {
        if (rear >= MAX_QUEUE - 1) {
            cout << "\n[ERROR] Antrian penuh!" << endl;
            return false;
        }
        if (front == -1) {
            front = 0;
        }
        rear++;
        pasien[rear] = nama;
        cout << "\n[SUKSES] Pasien " << nama << " berhasil terdaftar dalam antrian." << endl;
        return true;
    }
    
    //dequeue = mengambil pasien paling depan
    string dequeue() {
        if (front == -1 || front > rear) {
            cout << "\n[ERROR] Antrian kosong!" << endl;
            return "";
        }
        string nama = pasien[front];
        front++;
        return nama;
    }
    
    void display() {
        cout << "\n" << string(50, '=') << endl;
        cout << "DATA ANTRIAN PASIEN SAAT INI" << endl;
        cout << string(50, '=') << endl;
        
        if (front == -1 || front > rear) {
            cout << "[INFO] Antrian kosong." << endl;
        } else {
            cout << "No. | Nama Pasien" << endl;
            cout << string(50, '-') << endl;
            int nomor = 1;
            for (int i = front; i <= rear; i++) {
                // TANPA setw() - tinggal cout biasa
                cout << nomor << " | " << pasien[i] << endl;
                nomor++;
            }
        }
        cout << string(50, '=') << endl;
    }
    
    bool isEmpty() {
        return (front == -1 || front > rear);
    }
};

//struktur data stack untuk riwayat pemeriksaan
struct Stack {
    string riwayat[MAX_HISTORY];
    int top;
    
    Stack() {
        top = -1;
    }
    
    //push = menambah pasien ke riwayat pemeriksaan
    bool push(string nama) {
        if (top >= MAX_HISTORY - 1) {
            cout << "\n[ERROR] Riwayat penuh!" << endl;
            return false;
        }
        top++;
        riwayat[top] = nama;
        return true;
    }
    
    void display() {
        cout << "\n" << string(50, '=') << endl;
        cout << "RIWAYAT PEMERIKSAAN PASIEN" << endl;
        cout << string(50, '=') << endl;
        
        if (top == -1) {
            cout << "[INFO] Riwayat pemeriksaan kosong." << endl;
        } else {
            cout << "No. | Nama Pasien (Urutan Pemeriksaan)" << endl;
            cout << string(50, '-') << endl;
            int nomor = 1;
            for (int i = top; i >= 0; i--) {
                // TANPA setw() - tinggal cout biasa
                cout << nomor << " | " << riwayat[i];
                if (i == top) cout << " (Terakhir)";
                cout << endl;
                nomor++;
            }
        }
        cout << string(50, '=') << endl;
    }
    
    bool isEmpty() {
        return (top == -1);
    }
};

//fungsi menu utama dan sub menu
void tampilkanMenu() {
    cout << "\n" << string(50, '=') << endl;
    cout << "=== SISTEM LAYANAN KLINIK SEHAT ===" << endl;
    cout << string(50, '=') << endl;
    cout << "1. Daftar Pasien Baru (Antrian)" << endl;
    cout << "2. Panggil Pasien Selanjutnya" << endl;
    cout << "3. Tampilkan Antrian Pasien Saat Ini" << endl;
    cout << "4. Tampilkan Riwayat Pemeriksaan" << endl;
    cout << "5. Keluar" << endl;
    cout << string(50, '=') << endl;
}

void menu1_DaftarPasien(Queue &antrian) {
    string nama;
    cout << "\n--- DAFTAR PASIEN BARU ---" << endl;
    cout << "Masukkan nama pasien: ";
    cin.ignore();
    getline(cin, nama);
    
    if (nama.empty()) {
        cout << "\n[ERROR] Nama tidak boleh kosong!" << endl;
    } else {
        antrian.enqueue(nama);
    }
}

void menu2_PanggilPasien(Queue &antrian, Stack &riwayat) {
    cout << "\n--- PANGGIL PASIEN ---" << endl;
    
    if (antrian.isEmpty()) {
        cout << "[ERROR] Tidak ada pasien dalam antrian!" << endl;
        return;
    }
    
    string nama = antrian.dequeue();
    cout << "\n[DIPANGGIL] Pasien atas nama " << nama << " sedang diperiksa." << endl;
    riwayat.push(nama);
}

void menu3_TampilkanAntrian(Queue &antrian) {
    antrian.display();
}

void menu4_TampilkanRiwayat(Stack &riwayat) {
    riwayat.display();
}

int main() {
    Queue antrian;
    Stack riwayat;
    int pilihan;
    bool selesai = false;
    
    cout << "\n" << string(50, '*') << endl;
    cout << "  SELAMAT DATANG DI SISTEM KLINIK SEHAT" << endl;
    cout << string(50, '*') << endl;
    
    while (!selesai) {
        tampilkanMenu();
        cout << "\nPilih menu (1-5): ";
        cin >> pilihan;
        
        switch (pilihan) {
            case 1:
                menu1_DaftarPasien(antrian);
                break;
            case 2:
                menu2_PanggilPasien(antrian, riwayat);
                break;
            case 3:
                menu3_TampilkanAntrian(antrian);
                break;
            case 4:
                menu4_TampilkanRiwayat(riwayat);
                break;
            case 5:
                cout << "\n[INFO] Terima kasih! Program selesai." << endl;
                selesai = true;
                break;
            default:
                cout << "\n[ERROR] Pilihan tidak valid! Masukkan angka 1-5." << endl;
        }
    }
    
    cout << string(50, '*') << endl;
    return 0;
}