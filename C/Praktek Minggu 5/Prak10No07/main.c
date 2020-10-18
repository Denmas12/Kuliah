#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, sisa;
    int i=0;
    printf("Masukkan berapa biaya awal : ");scanf("%f", &a);
    printf("Berapa cicilan yang mampu dibayar tiap bulan : ");scanf("%f",&b);
    printf("Berapa rata-rata kenaikan tiap tahun : ");scanf("%f", &c);
    sisa=a;
    while(sisa>0)
    {
        i++;
        if(i%12==0)
        {
            sisa=sisa+(a*(c/100));
        }
        sisa=sisa-b;
    }
    printf("waktu yang dibutuhkan untuk melunasi biaya haji adalah %d bulan\n",i);
    return 0;
}
