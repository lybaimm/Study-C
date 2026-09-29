#include <iostream>
using namespace std;

int siswa [100];
int main() {
    for(int i=0;i<100;i++) {
        cin>>siswa[i];
    }
    for(int i=0;i<100;i++) {
        if(siswa[i]>=70) {
            cout<<"lulus";
        } else if(siswa[1]<70) {
            cout<<"gagal";
        }
        else if (siswa[i]>100) {
            cout<<"nilai hanya 1-100";
        }
    }
    return 0;
}