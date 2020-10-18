#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    printf("Masukkan nilai n : \n");scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",0-i);
        }
        else
        {
            printf("%d ",i);
        }
    }
    return 0;
}
