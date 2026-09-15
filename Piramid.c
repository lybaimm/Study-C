#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Masukan banyaknya baris: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i + 1; j++)
            printf("#");
        for (j = 1; j <= i; j++) {
            if (j == 1) printf("%d", j);
            else printf(" %d", j);
        }
        printf("\n");
    }
    return 0;
}