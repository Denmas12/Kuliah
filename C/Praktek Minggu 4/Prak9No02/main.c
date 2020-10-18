#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,bil, hasil=0;
    printf("Masukkan bilangan triangular : \n");scanf("%d",&bil);
    for(i=bil;i>=1;i--)
    {
        hasil+=i;
        printf("%d",i);
        if(i!=1)
        {
            printf(" + ");
        }
    }
    printf(" = %d",hasil);
    return 0;
}
