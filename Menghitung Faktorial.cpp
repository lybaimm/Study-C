#include <iostream>
using namespace std;

int main(){

    int hasil = 1;
    int j = 5;
    int total = 0;

    for(int i=1;i<=j;i++) {
        hasil = hasil * i;
    
        if(i%2 != 0) {
            total = total + hasil;
            cout << hasil << '\n';
        }

    }

    cout<< total << '\n';

    return 0;

}

#include <iostream>
using namespace std;

int main(){

    int hasil = 1;
    int j = 5;
    int total = 0;

    for(int i=1;i<=j;i++) {
        hasil = hasil * i;
    
        if(hasil %2 == 0) {
            total = total + hasil;
            cout << hasil << '\n';
        }

    }

    cout << total << '\n';

    return 0;

}
