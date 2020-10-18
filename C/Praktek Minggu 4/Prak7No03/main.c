#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pilihan;
    float sisi, jari, tinggi;
    printf("Menu :\n1. Menghitung volume kubus\n2. Menghitung luas lingkaran\n3. Menghitung volume silinder.\n\n");
    scanf("%d",&pilihan);
    printf("\n");
    switch(pilihan)
    {
    case 1:
        printf("Masukkan panjang sisi kubus : \n");
        scanf("%f",&sisi);

        printf("vol = sisi*sisi*sisi = %g\n", sisi*sisi*sisi);
        break;
    case 2:
        printf("Masukkan panjang jari-jari lingkaran : \n");
        scanf("%f",&jari);

        printf("luas = 3.14 * r2 = %g\n", 3.14*(jari*jari));
        break;
    case 3:
        printf("Masukkan panjang jari-jari lingkaran & tinggi silinder : \n");
        printf("dengan format: jari-jari tinggi\n");
        scanf("%f %f", &jari, &tinggi);

        printf("vol = 3.14 * r2 * t = %g\n", 3.14*(jari*jari)*tinggi);
        break;
    default:
        printf("Menu tidak tersedia.\n");
    }
    return 0;
}
