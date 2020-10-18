#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int abc;
    char d;
    printf("Masukkan char d \n");
    //atau pakai fflush(stdin);
    scanf("%c", &d);
    printf("Masukkan int abc \n");
    scanf("%d", &abc);
    printf("Isinya adalah %d dan %c\n", abc, d );
    return 0;
}
