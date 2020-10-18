#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Masukkan Nilai a : ");scanf("%d", &a);
    if(a>=0)
    {
        printf("Nilai a : %d\n", a);
    }
    else
    {
        printf("Nilai a : %d\n", 0-a);
    }
    return 0;
}
