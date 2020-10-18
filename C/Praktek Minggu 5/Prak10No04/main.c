#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, j;
    i=0;
    j=0;
    printf("Masukkan nilai n : ");scanf("%d",&n);
    while(i<n)
    {
        j+=i;
        printf("%d ", j);
        i++;
    }
    return 0;
}
