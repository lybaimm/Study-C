#include <iostream>
using namespace std;
typedef struct node *address;

struct node{
 int data;
 address next;
};
address first;
address alokasi(int info){
    address tmp=new node;
    tmp->data=info;
    tmp->next=NULL;
    return tmp;
}
void insertfirst(address baru){
    baru->next=first;
    first=baru;
}
void cetak(){
    address tmp=first;
    while(tmp!=NULL){
        cout<<tmp->data<<"\n";
        tmp=tmp->next;
    }
}
void deletefirst(){
    address tmp=first;
    first=first->next;
    free(tmp);
}
void insertlast(address baru){
    address belakang=first;
    while(belakang->next!=NULL){
        belakang=belakang->next;
    }
    belakang->next=baru;
}
int main()
{
    insertfirst(alokasi(10));
    insertfirst(alokasi(20));
    insertfirst(alokasi(30));
    insertlast(alokasi(40));
    cetak();
    

    return 0;
}