#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
};
node a;
node *p;
int main() {
    p = new node; //(node *)malloc(sizeof(node));
    p->data = 10;
    cout<<p->data;

    return 0;
}