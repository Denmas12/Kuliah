#include <stdio.h>
#include <stdlib.h>

float kuadrat(float n)
{
    return n*n;
}

int main()
{
    int i, hasil;
    printf("Masukkan bilangan untuk kuadrat : ");scanf("%d",&i);
    printf("\n");
    hasil = kuadrat(i);
    printf("Hasil dari %d adalah %d\n", i, hasil);
    return 0;
}
