#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int usd, idr = 11090;
    printf("Masukkan nilai $ ");
    scanf("%d", &usd);
    printf("Hasil = %d\n", usd*idr);
    /*float usd, idr = 11.090;

    printf("Masukkan nilai dolar yang ingin dikonversi = ");
    scanf("%f", &usd);
    printf("Hasil konversi adalah %5.3f \n", usd*idr);*/
    return 0;
}
