#include <iostream>
using namespace std;

// Deklarasi Simpul untuk Vertex dan Edge
typedef struct tipes *address;
struct tipes {
    address Left;   // Untuk vertex: simpul berikutnya | Untuk edge: pointer ke vertex tujuan
    int     INFO;   // Untuk vertex: nama (char) | Untuk edge: bobot jalur
    address Right;  // Pointer ke edge berikutnya
};

// --- Variabel Global ---
address P, FIRST, LAST, Q, R;
address PointS[5]; // Array penyimpan alamat masing-masing vertex

int main() {
    // Matriks Ketetanggaan (Adjacency Matrix) beserta bobotnya.
    // 0 = tidak ada jalur, nilai lain = bobot jalur.
    int A[5][5] = {
        {0,  5,  0,  2,  0},
        {6,  0,  3,  0,  0},
        {0,  0,  0,  0,  9},
        {0,  0, 12,  0,  7},
        {0, 14,  0,  0,  0}
    };

    char NmS[5] = {'A', 'B', 'C', 'D', 'E'};
    int I, J;

    cout << "Membangun Graph...\n";

    // --- Langkah 1: Membangun simpul vertex pertama ---
    P          = new tipes;
    P->INFO    = NmS[0];
    P->Left    = NULL;
    P->Right   = NULL;
    FIRST      = P;
    LAST       = P;
    PointS[0]  = P;
    cout << (char)P->INFO << " di alamat " << PointS[0] << "\n";

    // --- Langkah 2: Membangun simpul vertex berikutnya ---
    for (I = 1; I <= 4; I++) {
        P          = new tipes;
        P->INFO    = NmS[I];
        P->Left    = NULL;
        P->Right   = NULL;
        LAST->Left = P;
        LAST       = P;
        PointS[I]  = P;
        cout << (char)P->INFO << " di alamat " << PointS[I] << "\n";
    }

    // --- Langkah 3: Membangun simpul edge berdasarkan Matriks A ---
    Q = FIRST;
    for (I = 0; I <= 4; I++) {
        R = Q;
        cout << "\nVertex " << (char)Q->INFO << " ....\n";

        for (J = 0; J <= 4; J++) {
            if (A[I][J] != 0) {
                P          = new tipes;
                P->INFO    = A[I][J];      // Simpan bobot jalur
                P->Left    = PointS[J];    // Pointer Left menunjuk ke vertex tujuan
                P->Right   = NULL;
                R->Right   = P;            // Sambungkan ke edge sebelumnya
                R          = P;

                cout << "  --> " << (char)P->Left->INFO
                     << " (bobot: " << P->INFO << ")\n";
            }
        }

        Q = Q->Left;
    }

    return 0;
}