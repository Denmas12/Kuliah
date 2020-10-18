#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hari;
    printf("Masukan Hari 1 - 7 : ");scanf("%d",&hari);
    switch(hari)
    {
    case 1:
        printf("Minggu\n");
        break;
    case 2:
        printf("Senin\n");
        break;
    case 3:
        printf("Selasa\n");
        break;
    case 4:
        printf("Rabu\n");
        break;
    case 5:
        printf("Kamis\n");
        break;
    case 6:
        printf("Jum'at\n");
        break;
    case 7:
        printf("Sabtu\n");
        break;
    default:
        printf("Hari Tidak Valid\n");
    }
    return 0;
}
