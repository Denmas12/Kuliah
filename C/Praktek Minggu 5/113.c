#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1, bil=2, faktor, n, prima;
    printf("Menampilkan barisan bilangan prima\n");
    printf("Masukkan bilangan : \n");scanf("%d",&n);
    while(i<=n)
    {
        prima=1;
        for(faktor=2; faktor<bil; faktor++)
        {
            if(bil % faktor==0)
            {
                prima=0;
                break;
            }
        }
        if(prima)
        {
            printf("%d ", bil);
            i++;
        }
        bil++;
    }
    return 0;
}
