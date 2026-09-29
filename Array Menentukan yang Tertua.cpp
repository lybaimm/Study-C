#include <iostream>
using namespace std;

int A[4] = {15,24,45,35};
int tertua, index;

int main() {
    tertua = A[0];
    index=0;
    for(int i=0; i<4; i++) {
        if(tertua<A[i]) {
            tertua = A[i];
            index = i;
        }
    }
    cout<<"umur tertua adalah: "<<tertua<<" di index ke-"<<index;

    return 0;
}