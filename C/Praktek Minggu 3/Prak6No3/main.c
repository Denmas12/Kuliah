#include <stdio.h>
#include <stdlib.h>

int main()
{
    int perhitungan;
    float a, b;
    printf("Masukkan bilangan pertama : \n");scanf("%f",&a);
    printf("Masukkan bilangan kedua : \n");scanf("%f",&b);
    printf("Menu Matematika:\n 1. Penjumlahan\n 2. Pengurangan\n 3. Pembagian\n 4. Perkalian\n");scanf("%d",&perhitungan);
    if(perhitungan==1)
    {
        printf("Hasil operasi tersebut %g",a+b);
    }
    else if(perhitungan==2)
    {
        printf("Hasil operasi tersebut %g",a-b);
    }
    else if(perhitungan==3)
    {
        printf("Hasil operasi tersebut %g",a/b);
    }
    else if(perhitungan==4)
    {
        printf("Hasil operasi tersebut %g",a*b);
    }
    else
    {
        printf("Maaf tidak ada");
    }
    return 0;
}
