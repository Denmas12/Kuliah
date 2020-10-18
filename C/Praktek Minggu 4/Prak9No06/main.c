#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, nilai=0, jam=0, nj=0, jj=0, temp=0;
    char hur;
    float ha;
    printf("Masukkan nilai dengan format: nilai_matkul SPASI jumlah_jam\n");
    printf("Nilai Mata Kuliah A-E\n");
    for(i=1;i<=5;i++)
    {
        printf("Input Nilai Mata Kuliah %d & jumlah jam :  ",i);scanf("%c %d",&hur, &jam);
        fflush(stdin);
        switch(hur)
        {
        case 'A':
            nilai += 4;
            break;
        case 'B':
            nilai += 3;
            break;
        case 'C':
            nilai += 2;
            break;
        case 'D':
            nilai += 1;
            break;
        case 'E':
            nilai += 0;
            break;
        }
        jj+=jam;
        temp=nilai*jam;
        nj+=temp;
        temp=0;
        nilai=0;
    }
    ha = nj/jj;
    printf("Indeks Prestasi Semester : %g\n", ha);
    return 0;
}
