#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, min=1000, maks, rata, temp;
    float total;
    printf("Masukkan jumlah data : ");scanf("%d", &n);
    total=0;
    for(i=1;i<=n;i++)
    {
        printf("Masukkan nilai ke-%d = ", i);scanf("%d", &temp);
        fflush(stdin);
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
        else if(min>temp||min==0)
        {
            min=temp;
        }
        temp=0;
    }
    printf("Minimal : %d\n", min);
    printf("Maksimal : %d\n", maks);
    printf("Rata-rata : %g\n", total/n);
    return 0;
}
