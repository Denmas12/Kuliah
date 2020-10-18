#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jh=0, js=0;
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
    }
    printf("Jumlah huruf = %d\n", jh);
    printf("Jumlah spasi = %d\n", js);
    return 0;
}
