#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, a=0;
    char tanya='y';
    while(tanya=='y')
    {
        printf("Masukkan bilangan : ");
        fflush(stdin);
        scanf(" %d",&a);
        for(i=1;i<a;i+=2)
        {
            if(i%7==0||i%11==0)
            {
                continue;
            }
            else{
                printf("%d ", i);
            }
        }
        printf("\n");
        printf("Apakah anda ingin lanjut (y/t)?");
        fflush(stdin);
        scanf(" %c",&tanya);
        printf("\n");
    }

    return 0;
}
