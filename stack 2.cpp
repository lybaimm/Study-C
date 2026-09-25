#include <iostream>
using namespace std;

#define MAXSTACK 2

typedef struct {
    int item[MAXSTACK];
    int count;
} Stack;

Stack tumpukan;

bool isFull(Stack *x) {
    return (x->count >= MAXSTACK);
}

bool isEmpty(Stack *x) {
    return (x->count == 0);
}

void membuatStack(Stack *x) {
    x->count = 0;
}

void push(int data, Stack *x) {
    if (isFull(x)) {
        cout << "Stack Penuh\n";
    } else {
        x->item[x->count] = data;
        (x->count)++;
        cout << "berhasil memasukan " << data << "\n";
    }
}

void pop(Stack *x) {
    if (isEmpty(x)) {
        cout << "Stack Kosong\n";
    } else {
        --(x->count);
        cout << "berhasil mengeluarkan " << x->item[x->count] << "\n";
    }
}

void cetak() {
    for (int i = 0; i < tumpukan.count; i++) {
        cout << "isi index " << i << " : " << tumpukan.item[i] << endl;
    }
}

int main() {
    membuatStack(&tumpukan);
    push(3, &tumpukan); push(5, &tumpukan);
    push(6, &tumpukan); push(7, &tumpukan);
    cetak();

    pop(&tumpukan); pop(&tumpukan);
    pop(&tumpukan); pop(&tumpukan);
    cetak();
    
    return 0;
}