#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Masukkan Nilai a : \n");scanf("%d", &a);
    if(a%2 ==0)
    {
        printf("Nilai Genap\n");
    }
    else
    {
        printf("Nilai Ganjil\n");
    }
    return 0;
}
