#include <iostream>
using namespace std;

// 1. Definisi Struktur Node (Simpul)
// Setiap simpul terdiri dari data dan pointer ke simpul berikutnya[cite: 161].
struct Node {
    int data;
    Node* next;
};

// Pointer global untuk menandai awal list (Head)[cite: 166].
Node* head = NULL;

// 2. Fungsi untuk Alokasi Node Baru
// Menggunakan operator 'new' untuk memesan memori secara dinamis di C++[cite: 194].
Node* buatNode(int nilai) {
    Node* nodeBaru = new Node();
    nodeBaru->data = nilai;      // Mengisi field data[cite: 194].
    nodeBaru->next = NULL;       // Inisialisasi next sebagai NULL[cite: 195].
    return nodeBaru;
}

// 3. Fungsi Tambah di Depan (Insert First)
// Node baru akan menjadi Head baru dalam list[cite: 235].
void tambahDepan(int nilai) {
    Node* nodeBaru = buatNode(nilai);
    nodeBaru->next = head; // Menunjuk ke simpul yang sebelumnya pertama[cite: 244].
    head = nodeBaru;       // Head berpindah ke simpul baru[cite: 245].
}

// 4. Fungsi Tambah di Belakang (Insert Last)
// Menambahkan simpul di akhir list (Tail)[cite: 238].
void tambahBelakang(int nilai) {
    Node* nodeBaru = buatNode(nilai);
    
    // Jika list masih kosong, simpul baru otomatis jadi head
    if (head == NULL) {
        head = nodeBaru;
        return;
    }
    
    // Telusuri list sampai menemukan elemen terakhir (next == NULL)[cite: 386].
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = nodeBaru; // Sambungkan simpul terakhir lama ke simpul baru[cite: 363].
}

// 5. Fungsi Cetak List (Traversal)
// Mengunjungi setiap simpul dari head sampai NULL untuk menampilkan data[cite: 172].
void cetakList() {
    Node* temp = head;
    
    // Jika list kosong[cite: 26].
    if (temp == NULL) {
        cout << "List masih kosong!" << endl;
        return;
    }
    
    cout << "Isi Linked List: ";
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next; // Berpindah ke simpul berikutnya[cite: 172].
    }
    cout << "NULL" << endl;
}

// 6. Fungsi Utama (Main)
int main() {
    // Inisialisasi awal list kosong[cite: 53].
    head = NULL;

    // Menambahkan data contoh
    tambahDepan(10);      // List: 10 -> NULL
    tambahBelakang(20);      // List: 20 -> 10 -> NULL
    tambahBelakang(30);   // List: 20 -> 10 -> 30 -> NULL
    tambahBelakang(40);   // List: 20 -> 10 -> 30 -> 40 -> NULL

    // Menampilkan hasil akhir
    cetakList();

    return 0;
}