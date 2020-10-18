#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hari;
    printf("Masukkan No Hari : ");scanf("%d",&hari);
    if(hari==1)
    {
        printf("Senin\n");
    }
    else if(hari==2)
    {
        printf("Selasa\n");
    }
    else if(hari==3)
    {
        printf("Rabu\n");
    }
    else if(hari==4)
    {
        printf("Kamis\n");
    }
    else if(hari==5)
    {
        printf("Jumat\n");
    }
    else if(hari==6)
    {
        printf("Sabtu\n");
    }
    else if(hari==7)
    {
        printf("Minggu\n");
    }
    else
    {
        printf("Hari tidak Valid\n");
    }
    return 0;
}
