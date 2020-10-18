#include <stdio.h>
#include <stdlib.h>

int main()
{
    int alpha_beta_routine;
    int jmTiket, jm3, sm3, harga = 50000;
    printf("Masukkan jumlah tiket ");scanf("%d", &jmTiket);
    jm3 = jmTiket/3;
    sm3 = jmTiket%3;
    harga = jm3 * (2 * harga)+ sm3 * harga;
    printf("Jumlah Harga Tiket adalah %d\n", harga);
    return 0;
}
