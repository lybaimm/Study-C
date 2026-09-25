#include <iostream>
using namespace std;

#define MAX_SIZE 5 // Batas maksimal isi stack

struct Stack {
    int top;             // Penunjuk indeks elemen teratas
    int data[MAX_SIZE];  // Array untuk menyimpan data
};

// Fungsi membuat/mereset stack
void initStack(Stack &S) {
    S.top = -1; // -1 menandakan stack sedang kosong
}

bool isEmpty(Stack S) {
    return S.top == -1;
}

bool isFull(Stack S) {
    return S.top == MAX_SIZE - 1;
}

// Fungsi memasukkan data
void push(Stack &S, int nilai) {
    if (isFull(S)) {
        cout << "Stack Penuh! (Stack Overflow)\n";
    } else {
        S.top++; // Naikkan penunjuk top
        S.data[S.top] = nilai; // Masukkan nilai
        cout << nilai << " berhasil di-push ke stack.\n";
    }
}

// Fungsi mengambil data
void pop(Stack &S) {
    if (isEmpty(S)) {
        cout << "Stack Kosong! (Stack Underflow)\n";
    } else {
        cout << S.data[S.top] << " berhasil di-pop dari stack.\n";
        S.top--; // Turunkan penunjuk top, data lama otomatis tertimpa nanti
    }
}

int main() {
    Stack myStack;
    initStack(myStack);

    push(myStack, 10); // stack: [10]
    push(myStack, 20); // stack: [10, 20]
    push(myStack, 30); // stack: [
}