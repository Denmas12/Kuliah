#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nilai[1000];
    int i, hasil;
    i=0;
    printf("Masukkan bilangan : \n");scanf("%s", &nilai);
    while(nilai[i]!=0)
    {
        hasil+=nilai[i]-'0';
        i++;
    }
    printf("Jumlah angka %s adalah : %d", nilai, hasil);
    return 0;
}
