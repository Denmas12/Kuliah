#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Masukkan Nilai a : ");scanf("%d",&a);
    printf("Masukkan Nilai b : ");scanf("%d",&b);
    if(a%b==0)
    {
        printf("Bilangan pertama adalah kelipatan persekutuan bilangan kedua\n");
    }
    else
    {
        printf("Bilangan pertama bukan kelipatan persekutuan bilangan kedua\n");
    }
    return 0;
}
