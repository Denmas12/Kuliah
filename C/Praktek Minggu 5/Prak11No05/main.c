#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n;
    printf("Masukkan nilai n : ");scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
