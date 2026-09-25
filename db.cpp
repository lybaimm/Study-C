#include <iostream>
using namespace std;

// ==========================================
// 1. DEFINISI STRUKTUR DATA
// ==========================================
struct Node {
    int data;
    Node *next;
    Node *previous;
};

typedef Node* address;

address first = NULL;
address last = NULL;

// Fungsi Alokasi (Penting agar Main Program rapi)
address alokasikan(int nilai) {
    address baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    baru->previous = NULL;
    return baru;
}

// ==========================================
// FUNGSI PENDUKUNG (INSERT)
// ==========================================
void insertFirst(address baru) {
    if (first != NULL) {
        baru->next = first;
        first->previous = baru;
        first = baru;
    } else {
        first = baru;
        last = baru;
    }
}

void insertLast(address baru) {
    if (first != NULL) {
        last->next = baru;
        baru->previous = last;
        last = baru;
    } else {
        first = baru;
        last = baru;
    }
}

// ==========================================
// FUNGSI DELETE
// ==========================================

void deleteFirst() {
    if (first == NULL) {
        cout << "List kosong, tidak ada yang dihapus." << endl;
        return;
    }

    address hapus = first;
    
    // Kondisi jika hanya ada satu node
    if (first == last) {
        first = NULL;
        last = NULL;
    } else {
        // Pindahkan first ke node selanjutnya
        first = first->next;
        // Putus hubungan node baru 'first' dengan node yang lama
        first->previous = NULL;
    }
    
    delete hapus; // Hapus dari memori
    cout << "Node pertama berhasil dihapus." << endl;
}

void deleteLast() {
    if (first == NULL) {
        cout << "List kosong, tidak ada yang dihapus." << endl;
        return;
    }

    address hapus = last;

    // Kondisi jika hanya ada satu node
    if (first == last) {
        first = NULL;
        last = NULL;
    } else {
        // Pindahkan last ke node sebelumnya
        last = last->previous;
        // Putus hubungan node baru 'last' dengan node yang lama
        last->next = NULL;
    }

    delete hapus; // Hapus dari memori
    cout << "Node terakhir berhasil dihapus." << endl;
}

// ==========================================
// 2. FUNGSI SEARCH
// ==========================================
void searchNode(int target) {
    address jalan = first;
    bool ketemu = false;

    while (jalan != NULL) {
        if (jalan->data == target) {
            cout << "Data " << target << " ditemukan di memori " << jalan << "!" << endl;
            ketemu = true;
            break; // Berhenti jika sudah ketemu
        }
        jalan = jalan->next;
    }

    if (!ketemu) {
        cout << "Data tidak ditemukan." << endl;
    }
}

// Fungsi Cetak (Untuk verifikasi di Main)
void cetak() {
    address jalan = first;
    while (jalan != NULL) {
        cout << jalan->data << " ";
        jalan = jalan->next;
    }
    cout << endl;
}

// ==========================================
// 3. MAIN PROGRAM
// ==========================================
int main() {
    // 1. Inisialisasi
    first = NULL;
    last = NULL;

    // 2. Insert First 10 dan 20
    // Urutan: 10 masuk, lalu 20 masuk di depan 10.
    insertFirst(alokasikan(10));
    insertFirst(alokasikan(20));

    // 3. Insert Last 30
    // Urutan: 30 masuk di belakang 10.
    insertLast(alokasikan(30));
    deleteFirst(); // Hapus node pertama (20)
    deleteLast();  // Hapus node terakhir (30)

    // 4. Cetak seluruh isi list
    // Hasil yang diharapkan: 20 10 30
    cout << "Isi List: ";
    cetak();

    // 5. Panggil fungsi searchNode 20
    searchNode(20);

    return 0;
}