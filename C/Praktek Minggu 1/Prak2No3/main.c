#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b;
    printf("Masukkan nilai a = ");
    scanf("%d", &a);
    printf("Masukkan nilai b = ");
    scanf("%d", &b);

    printf("Jumlah %d + %d = %d\n", a, b, a+b);
    return 0;
}

