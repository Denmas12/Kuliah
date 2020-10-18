#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total, diskon;
    printf("Masukkan total pembelian : \n");scanf("%d",&total);
    if(total>=100000)
    {
        diskon = total*0.05;
        printf("Total pembelian adalah Rp.%d diskon 5 percent\n",total-diskon);
    }
    else
    {
        printf("Total pembelain adalah Rp.%d\n",total);
    }
    return 0;
}
