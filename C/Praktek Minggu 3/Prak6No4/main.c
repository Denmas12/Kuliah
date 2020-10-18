#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nilai;
    printf("Masukkan Nilai : \n");scanf("%d",&nilai);
    if(nilai<=40)
    {
        printf("Nilai huruf adalah E");
    }
    else if(nilai<=55)
    {
        printf("Nilai huruf adalah D");
    }
    else if(nilai<=60)
    {
        printf("Nilai huruf adalah C");
    }
    else if(nilai<=80)
    {
        printf("Nilai huruf adalah B");
    }
    else if(nilai<=100)
    {
        printf("Nilai huruf adalah A");
    }
    else
    {
        printf("Maaf tidak ada");
    }
    return 0;
}
