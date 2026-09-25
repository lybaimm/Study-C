#include <iostream>
using namespace std;

 // Deklarasi Node Double Linked List
 typedef struct tnode *address;
 struct tnode {
 address previous;
 int data;
 address next;
 } node;

 address first;
 address last;

 // Method untuk alokasi memori node baru
 address alokasikan(int data_x) {
 address x = new tnode;
 x->previous = NULL;
 x->next = NULL;
 x->data = data_x;
 return x;
 }

 // Method Insert First
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

 // Method Insert Last
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

 // Method Cetak
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
 cetak();

 cout << "Insert Last 70:" << endl;
 insertLast(alokasikan(70));
 cetak();

 return 0;
 }