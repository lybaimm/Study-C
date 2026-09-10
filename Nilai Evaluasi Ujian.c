#include <stdio.h>

int main() {
    int nilai;
    
    printf("Masukan nilai evaluasi ujian: ");
    scanf("%d", &nilai);

    if(nilai>=85) {
        printf("Nilai evaluasi ujian adalah A");
    } else if(nilai>=70 && 84) {
        printf("Nilai evaluasi ujian adalah B");
    } else if(nilai>=50 && 69) {
        printf("Nilai evaluasi ujian adalah C");
    } else if(nilai<50) {
        printf("Nilai evaluasi ujian adalah D");
    }
    return 0;
}