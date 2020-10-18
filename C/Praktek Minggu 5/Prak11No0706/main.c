#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n=0;
    char tanya='y';
    while(tanya=='y')
    {
        printf("Masukkan nilai n : ");
        fflush(stdin);
        scanf(" %d", &n);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d", i);
            }
            printf("\n");
        }
        printf("\n");
        printf("Apakah anda ingin lanjut (y/t)?");
        fflush(stdin);
        scanf(" %c",&tanya);
        printf("\n");
    }
    return 0;
}
