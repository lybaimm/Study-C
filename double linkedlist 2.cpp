#include <iostream>
using namespace std;

typedef struct tnode *address;
struct tnode {
    address previous;
    int data;
    address next;
} node;

address first;
address last;

address alokasikan(int data_x) {
    address x = new tnode;
    x->previous = NULL;
    x->next = NULL;
    x->data = data_x;
    return x;
}

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

void insertAfter(address baru, address lama){
    baru->next= lama->next;
    baru->next->previous = baru;
    lama->next = baru;
    baru->previous = lama; 
}

void deleteFirst() {
    if (first != NULL) {
        address temp = first;
        first = first->next;
        if (first != NULL) {
            first->previous = NULL;
        } else {
            last = NULL;
        }
        delete temp;
    }
}

void deleteLast () {
    if (last != NULL) {
        address temp = last;
        last = last->previous;
        if (last != NULL) {
            last->next = NULL;
        } else {
            first = NULL;
        }
        delete temp;
    }
}

void deleteAfter (address lama) {
    if (lama != NULL && lama->next != NULL) {
        address temp = lama->next;
        lama->next = temp->next;
        if (temp->next != NULL) {
            temp->next->previous = lama;
        } else {
            last = lama;
        }
        delete temp;
    }
    
}

void cetak() {
 address jalan = first;
 while (jalan != NULL) {
 cout << jalan->data << endl;
 jalan = jalan->next;
 }
 }

 int main() {
 first = NULL;
 last = NULL;

 cout << "Insert First 10, 30, 50:" << endl;
 insertFirst(alokasikan(10));
 insertFirst(alokasikan(30));
 insertFirst(alokasikan(50));
 insertAfter(alokasikan(20), first->next);
 deleteFirst();
 deleteLast();
 deleteAfter(first);
 cetak();

 cout << "Insert Last 70:" << endl;
 insertLast(alokasikan(70));
 cetak();

 return 0;
 }