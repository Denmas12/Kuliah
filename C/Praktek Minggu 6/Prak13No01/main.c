#include <stdio.h>
#include <stdlib.h>

void menu()
{
    printf("Pilihan Menu\n");
}

int main()
{
    int i, n;
    printf("Masukkan nilai loop n : ");scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        menu();
    }
    return 0;
}
