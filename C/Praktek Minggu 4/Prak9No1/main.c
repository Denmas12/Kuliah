#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    printf("Masukkan nilai n : \n");scanf("d",&n);
    for(i=1;i<=n;i+=2)
    {
        printf("%d ",i);
    }
    return 0;
}
