#include <stdio.h>

int i, j;
int ages[100];
int main() 
    {
    for( i=0; i<100; i++ ) {
        ages[i]=i;
    }
    for( j=0; j<100; j++ ) {
        printf("%d \n", ages[j] );
    }
    return 0;
}