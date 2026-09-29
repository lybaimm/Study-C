#include <iostream>
using namespace std;

int A[2][2] = {{1,2},{3,4}};
int B[2][2] = {{5,6},{7,8}};
int AB[2][2];
int main() 
{
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            AB[i][j]=0;
            for(int k=0; k<2; k++) {
                AB[i][j] = A[i][k] * B[k][j];
            }
        }
    }
    
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            cout<<AB[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}