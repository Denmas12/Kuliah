#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Masukkan suhu : ");scanf("%d",&a);
    if(a>=100)
    {
        printf("Benda gas");
    }
    else if(a>=0)
    {
        printf("Benda cair");
    }
    else
    {
        printf("Benda padat");
    }

    return 0;
}
