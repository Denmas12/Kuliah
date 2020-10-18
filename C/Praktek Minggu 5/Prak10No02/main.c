#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, nilai, hasil;
    char huruf;
    i=1;
    hasil=0;
    while(huruf!='t')
    {
        nilai=0;
        printf("Masukkan bilangan ke-%d : ", i);scanf("%d",&nilai);
        printf("Mau memasukkan data lagi [y/t] ? ");scanf(" %c",&huruf);
        i++;
        hasil+=nilai;
    }
    printf("Total bilangan = %d", hasil);
    return 0;
}
