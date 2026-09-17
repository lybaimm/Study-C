#include <stdio.h>
void tukar(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main () {
    int a, b;
    printf("Masukan nilai a : ");
    scanf("%d", &a);
    printf("Masukan nilai b : ");
    scanf("%d", &b);
    printf("sebelum ditukar : a = %d, b = %d\n", a, b);
    tukar(&a, &b);
    printf("Setelah ditukar : a = %d, b = %d\n", a, b);
    return 0;
}