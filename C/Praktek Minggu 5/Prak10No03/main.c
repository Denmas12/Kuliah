#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, nilai, hasil, min, maks;
    char huruf;
    i=1;
    n=0;
    hasil=0;
    while(huruf!='t')
    {
        nilai=0;
        printf("Masukkan bilangan ke-%d : ", i);scanf("%d",&nilai);
        printf("Mau memasukkan data lagi [y/t] ? ");scanf(" %c",&huruf);
        i++;
        n++;
        hasil+=nilai;
        if(nilai>min||maks<nilai||maks==0)
        {
            maks=nilai;
        }
        if(min>nilai||min==0)
        {
            min=nilai;
        }
    }
    printf("Rata-rata = %d\n", hasil/n);
    printf("Maksimum = %d\n", maks);
    printf("Minimum = %d\n", min);
    return 0;
}
