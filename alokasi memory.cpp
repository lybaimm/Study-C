#include <iostream>
using namespace std;

int a;
int *p;
int main() {
    
    p = new int; //(int *)malloc(sizeof(int));
    *p = 10;
    cout << *p << endl;

    return 0;
}