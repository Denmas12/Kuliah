#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, min, maks, rata, temp;
    char tanya='y';
    float total;
    do
    {
        printf("Masukkan jumlah data : ");scanf("%d", &n);
        total=0;
        for(i=1;i<=n;i++)
        {
            printf("Masukkan nilai ke-%d = ", i);
            fflush(stdin);
            scanf(" %d", &temp);
            total+=temp;
            if(n==1)
            {
                min=temp;
                maks=temp;
            }
            else if(maks<temp||maks==0)
            {
                maks=temp;
            }
            if(min>temp||min==0)
            {
                min=temp;
            }
            temp=0;
        }
        printf("Minimal : %d\n", min);
        printf("Maksimal : %d\n", maks);
        printf("Rata-rata : %g\n", total/n);
        printf("\n");
        printf("Apakah anda ingin lanjut (y/t)?");
        fflush(stdin);
        scanf(" %c",&tanya);
        printf("\n");
    }while(tanya=='y');
    return 0;
}
