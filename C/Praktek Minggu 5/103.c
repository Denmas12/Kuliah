#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jh=0, js=0, jkap=0, jcil=0, juma;
    char kalimat;
    printf("Untuk mengakhiri pemasukan kalimat, tombol ENTER\n");
    printf("Kalimat : ");
    while((kalimat=getchar())!='\n')
    {
        jh++;
        if(kalimat==' ')
        {
            js++;
        }
        else if(kalimat>=65 && kalimat<=90)
        {
            jkap++;
        }
        else if(kalimat>=97 && kalimat<=122)
        {
            jcil++;
        }
        else if(kalimat>=48 && kalimat<=57)
        {
            juma++;
        }
    }
    printf("Jumlah semua karakter = %d\n", jh);
    printf("Jumlah spasi = %d\n", js);
    printf("Jumlah huruf kapital = %d\n", jkap);
    printf("Jumlah huruf kecil = %d\n", jcil);
    printf("Jumlah angka = %d\n", juma);
    return 0;
}
