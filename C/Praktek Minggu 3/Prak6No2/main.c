#include <stdio.h>
#include <stdlib.h>

int main()
{
    int akademik, keterampilan, psikologi, rata;
    printf("Masukkan Nilai Akademik Anda : \n");scanf("%d", &akademik);
    printf("Masukkan Nilai Keterampilan Anda : \n");scanf("%d", &keterampilan);
    printf("Masukkan Nilai Psikologi Anda : \n");scanf("%d", &psikologi);
    rata =(akademik+keterampilan+psikologi)/3;
    printf("%d\n",rata);
    if(rata>=75)
    {
        if(akademik>keterampilan&&akademik>psikologi)
        {
            printf("Anda diterima, Dan Anda ditempatkan dibagian Administrasi\n");
        }
        else if(keterampilan>psikologi&&keterampilan>akademik)
        {
            printf("Anda diterima, Dan Anda ditempatkan dibagian Produksi\n");
        }
        else /*if(psikologi>keterampilan&&psikologi>akademik)*/
        {
            printf("Anda diterima, Dan Anda ditempatkan dibagian Pemasaran\n");
        }
    }
    else
    {
        printf("Anda gagal\n");
    }
    printf("Ak %d, Ket %d, Psi %d", akademik, keterampilan, psikologi);
    return 0;
}
