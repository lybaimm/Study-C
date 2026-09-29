#include <iostream>
using namespace std;

int main() {
int i, a;

for(i=1;i<=5;i++) {
    for(a=1;a<=i;a++) {
        cout<<"*";
    }
    cout<<endl;
}

cout<<endl;

for(i=5;i>=1;i--) {
    for(a=1;a<=i;a++) {
        cout<<"*";
    }
    cout<<endl;
}
    cout<<"\nSelesai";
    
    return 0;
}